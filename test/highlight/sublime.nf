// SYNTAX TEST "Packages/sublime-nextflow/Nextflow.sublime-syntax"
#!/usr/bin/env nextflow
// <- comment.line.hashbang.nextflow

// <- source.nextflow

include { SPADES as spades; IQTREE } from './modules/local/spades'
// ^ meta.import-module.nextflow keyword.control.include-module.nextflow
//      ^ meta.import-module.nextflow meta.module-include-block.nextflow punctuation.section.module-include-block.begin.nextflow
//               ^ meta.import-module.nextflow meta.module-include-block.nextflow keyword.operator.as.nextflow
//                        ^ meta.import-module.nextflow meta.module-include-block.nextflow punctuation.separator.include-module-list.nextflow
//                                   ^ meta.import-module.nextflow keyword.control.include-module.from.nextflow
//                                        ^ meta.import-module.nextflow string.quoted.single.relative-import-path.nextflow punctuation.definition.string.begin.nextflow
//                                         ^ string.quoted.single.relative-import-path.nextflow punctuation.definition.relative-import-path.nextflow
//                                                               ^ meta.import-module.nextflow string.quoted.single.relative-import-path.nextflow punctuation.definition.string.end.nextflow
include { SPADES as spades; IQTREE } from '/modules/local/spades'
//                                         ^ invalid.illegal.relative-import-path.nextflow

include { SPADES
//              ^ meta.import-module.nextflow meta.module-include-block.nextflow invalid.illegal.unclosed-include-body.nextflow

include { IQTREE } from '../modules/local/iqtree' addParams( options: modules['iqtree'] )

params.reads_dir = "$baseDir/data/reads/"
// ^ support.variable.params.nextflow
//         ^ entity.name.parameter.nextflow

params.cdhit_identity_threshold = 0.9
//                              ^ keyword.operator.assignment.nextflow
//                                 ^ constant.numeric.nextflow

// <- source.nextflow

// Show help message if --help specified
// ^ source.nextflow comment.line.double-slash.nextflow
if (params.help){
// <- keyword.control.nextflow
//  ^ support.variable.params.nextflow
//         ^ entity.name.parameter.nextflow
  helpMessage()
// ^ meta.block.nextflow meta.method-call.nextflow meta.method.nextflow
  exit 0
// ^ meta.block.nextflow support.function.exit.nextflow
//     ^ meta.block.nextflow constant.numeric.nextflow
}

Channel
// <- storage.type.class.nextflow
  .fromFilePairs(params.input)
// ^ support.function.channel-factory.nextflow
  .map { [ it[0].replaceAll(/_S\d{1,2}_L001/, ""), it[1] ] }
// ^ keyword.operator.channel-transforming-operator.nextflow
//            ^ meta.block.nextflow meta.structure.nextflow meta.structure.nextflow constant.numeric.nextflow
//               ^ meta.block.nextflow meta.structure.nextflow meta.method-call.nextflow meta.method.nextflow
//         ^ variable.language.nextflow
//                           ^ meta.block.nextflow meta.structure.nextflow meta.method-call.nextflow string.regexp.nextflow
  .set { ch_input }
// ^ keyword.operator.channel-other-operator.nextflow

// <- source.nextflow

log.info """
// <- support.variable.log.nextflow
${workflow.commandLine}
// ^ source.nextflow.embedded.source support.variable.workflow.nextflow
"""

// <- source.nextflow

process download_phix {
// ^ meta.definition.process.nextflow storage.type.return-type.def.nextflow
//      ^ meta.definition.process.nextflow entity.name.process.nextflow
//                    ^ meta.definition.process.nextflow punctuation.definition.process.begin.nextflow
  output:
    file('phix.fa') into phix_file
//  ^ meta.definition.process.nextflow meta.definition.process-output.nextflow support.function.file.nextflow
//        ^ meta.definition.process-output.nextflow string.quoted.single.nextflow
//                  ^ meta.definition.process-output.nextflow keyword.operator.into.nextflow

  '''
// ^ meta.definition.process.nextflow string.quoted.single.block.nextflow punctuation.definition.string.begin.nextflow
  curl "https://eutils.ncbi.nlm.nih.gov/entrez/eutils/efetch.fcgi?db=nuccore&id=NC_001422.1&rettype=fasta&retmode=text" > phix.fa
// ^ meta.definition.process.nextflow string.quoted.single.block.nextflow
  '''
// ^ meta.definition.process.nextflow string.quoted.single.block.nextflow punctuation.definition.string.end.nextflow
}

// <- source.nextflow

process remove_phix {
// <- meta.definition.process.nextflow
// <- storage.type.return-type.def.nextflow
//      ^ entity.name.process.nextflow
//                  ^ meta.definition.process.nextflow punctuation.definition.process.begin.nextflow
  tag "$sample_id"
// ^ meta.definition.process.nextflow support.type.nextflow
//       ^ string.quoted.double.nextflow variable.other.interpolated.nextflow

  input:
// ^ meta.definition.process.nextflow meta.definition.process-input.nextflow keyword.other.process-input.nextflow
    file phix from phix_file
//   ^ meta.definition.process-input.nextflow support.function.file.nextflow
//            ^ meta.definition.process-input.nextflow keyword.operator.from.nextflow
    set sample_id, file(read1), file(read2) from samples_ch
//  ^ meta.definition.process-input.nextflow keyword.other.channel.set.nextflow
//                 ^ meta.definition.process-input.nextflow support.function.file.nextflow
//                                          ^ meta.definition.process-input.nextflow keyword.operator.from.nextflow
  output:
// ^ meta.definition.process.nextflow meta.definition.process-output.nextflow
    set val(sample_id), file(filt_reads1), file(filt_reads2) into filtered_reads_ch, filtered_reads_ch2
//  ^ meta.definition.process-output.nextflow keyword.other.channel.set.nextflow
//      ^ meta.definition.process-output.nextflow support.function.val.nextflow
//                      ^ meta.definition.process-output.nextflow support.function.file.nextflow
//                                                           ^ meta.definition.process-output.nextflow keyword.operator.into.nextflow
    file stats into remove_phix_stats_ch

  script:
// ^ meta.definition.process.nextflow keyword.other.process-script-def.nextflow
  filt_reads1 = "${sample_id}_1.fq"
  filt_reads2 = "${sample_id}_2.fq"
  stats = "${sample_id}-remove_phix-stats.txt"
  """
// ^ meta.definition.process.nextflow string.quoted.double.block.nextflow punctuation.definition.string.begin.nextflow
  bbduk.sh in1=${read1} in2=${read2} out1=${filt_reads1} out2=${filt_reads2} ref=$phix k=31 hdist=1 stats=${stats}
// ^ meta.definition.process.nextflow string.quoted.double.block.nextflow
//               ^ string.quoted.double.block.nextflow source.nextflow.embedded.source
//                                                                                 ^ string.quoted.double.block.nextflow variable.other.interpolated.nextflow
  """
// ^ meta.definition.process.nextflow string.quoted.double.block.nextflow punctuation.definition.string.end.nextflow
}

process BLAST {
  conda 'bioconda::blast=2.11.0=pl526he19e7b1_0'
// ^ meta.definition.conda-directive.nextflow support.type.conda.nextflow
//      ^ meta.definition.conda-directive.nextflow string.quoted.single.nextflow punctuation.definition.string.begin.nextflow

  input:
  tuple val(meta), path(fasta)
// ^ meta.definition.process.nextflow meta.definition.process-input.nextflow keyword.other.channel.tuple.nextflow
//      ^ meta.definition.process-input.nextflow support.function.val.nextflow
//                 ^ meta.definition.process-input.nextflow support.function.path.nextflow
  path(db)
// ^ meta.definition.process-input.nextflow support.function.path.nextflow

  output:
  tuple val(meta), path("*.blast.txt"), optional: true, emit: txt
// ^ meta.definition.process.nextflow meta.definition.process-output.nextflow keyword.other.channel.tuple.nextflow
//      ^ meta.definition.process-output.nextflow support.function.val.nextflow
//                 ^ meta.definition.process-output.nextflow support.function.path.nextflow
  path('*.version.txt'), emit: version
  path('file')

  script:
  """
  blastn -db $db -query $fasta -outfmt 6 -out ${meta.id}.blast.txt

  blastn -version > blast.version.txt
  """
}


// <- source.nextflow

process MASH_SCREEN {
  tag "${meta.id}"
  publishDir "$outdir/mash_screen", mode: params.publish_dir_mode
// ^ meta.definition.process.nextflow support.type.nextflow
//                                  ^ meta.definition.process.nextflow constant.other.key.nextflow

  input:
  path db
//     ^ meta.definition.process.nextflow meta.definition.process-input.nextflow meta.function-call.process-path.nextflow variable.other.process.nextflow
  tuple val(meta), path(reads)

  output:
  tuple val(meta), path('*.mash_screen.tsv'), emit: results
//      ^ meta.definition.process-output.nextflow meta.definition.process-output-channel.nextflow meta.function-call.process-val.nextflow support.function.val.nextflow
//          ^ meta.definition.process-output.nextflow meta.definition.process-output-channel.nextflow meta.function-call.process-val.nextflow variable.other.process.nextflow
  path '*.version.txt', emit: version

  """
  echo "identity\tmatching_sketches\tmedian_multiplicity\tp_value\tquery_id\tquery_comment" > ${meta.id}.mash_screen.tsv
  mash screen -w -p ${task.cpus} $db $reads | sort -grk1 - >> ${meta.id}.mash_screen.tsv

  mash --version > mash.version.txt
  """
}

process ProcessName {
  tag "info about process"

  input:
    set val(value), file(file1) into ch_files
//                              ^ source.nextflow meta.definition.process.nextflow meta.definition.process-input.nextflow invalid.illegal.into.nextflow

  output:
    set val(value), file(output) from ch_output
//                               ^ source.nextflow meta.definition.process.nextflow meta.definition.process-output.nextflow invalid.illegal.from.nextflow

  script:
  """
  dostuff
  """
}


Channel.empty() // Create assemblies channel
//      ^ support.function.channel-factory.nextflow
//                 ^ comment.line.double-slash.nextflow
  .mix(shovill_assembly_ch, unicycler_assembly_ch)
// ^ keyword.operator.channel-combining-operator.nextflow
  .set { assembly_ch }
// ^ keyword.operator.channel-other-operator.nextflow

// <- source.nextflow


workflow {
// ^ meta.definition.workflow.nextflow keyword.declaration.workflow.nextflow
  ch_input = Channel.fromPath(params.input)
  SPADES(ch_input, params.spades_args)
// ^ meta.process-call.nextflow entity.name.class.process.nextflow
//      ^ meta.process-call.nextflow punctuation.section.process-call.begin.nextflow
//                                   ^ meta.process-call.nextflow punctuation.section.arguments.end.nextflow
//       ^ source.nextflow meta.definition.workflow.nextflow meta.process-call.nextflow variable.parameter.channel.nextflow
  ch_db = Channel.fromPath(params.blast_db)
  BLAST(SPADES.out.txt, ch_db)
//     ^ meta.process-call.nextflow punctuation.section.process-call.begin.nextflow
//                 ^ meta.process-call.nextflow variable.channel.process-output-emit.nextflow
  if (!params.skip_kraken2) {
    ch_index = Channel.fromPath(params.kraken2_index)
    KRAKEN2(ch_index, ch_input)
//  ^ meta.conditional-block.nextflow meta.process-call.nextflow entity.name.class.process.nextflow
  } else {
    ch_index = Channel.fromPath(params.kraken2_index)
    KRAKEN2(ch_index, ch_input)
//  ^ meta.conditional-block.nextflow meta.process-call.nextflow entity.name.class.process.nextflow
  }
  WHATEVER(ch_input)
// ^ meta.process-call.nextflow entity.name.class.process.nextflow
}

workflow DOSTUFF {
//       ^ meta.definition.workflow.nextflow entity.name.workflow.nextflow
}


workflow.onComplete {
// ^ support.variable.workflow.nextflow
  println """
// ^ meta.block.nextflow support.function.print.nextflow
  Completed at : ${workflow.complete}
//                 ^ meta.block.nextflow string.quoted.double.block.nextflow source.nextflow.embedded.source support.variable.workflow.nextflow
  Results Dir  : ${file(params.outdir)}
//                 ^ source.nextflow.embedded.source support.function.file.nextflow
//                      ^ support.variable.params.nextflow
//                             ^ entity.name.parameter.nextflow
  """.stripIndent()
//    ^ meta.method-call.nextflow meta.method.nextflow
}
