#!/usr/bin/python3

import os
import sys
import textwrap

def gc_content(seq):
    gc_count = seq.count("C") + seq.count("G")
    total_count = len(seq)
    return gc_count / float(total_count)

def parse_fasta(fname):
    with open(fname, "r") as fh:
        identifier = None
        sequence = []
        
        for line in fh:
            line = line.strip()
            if line.startswith(">"):
                if identifier is None:
                    identifier = line
                else:
                    yield identifier, sequence
                    identifier = line
                    sequence = []
            else:
                seq_on_line = list(line)
                sequence.extend(seq_on_line)

def main():
    if len(sys.argv) < 2:
        print("No file specified")
        sys.exit()

    fname = sys.argv[1]
    if not os.path.isfile(fname):
        print("No such file:" + fname)
        sys.exit()

    current_score = 0.0
    current_record = None
    for identifier, sequence in parse_fasta(fname):
        if gc_content(sequence) > current_score:
            current_record = (identifier, sequence)

    identifier, sequence = current_record
    print(identifier)

    seq_one_line_str = "".join(sequence)
    seq_multi_line_list = textwrap.wrap(seq_one_line_str)
    seq_multi_line_str = "\n".join(seq_multi_line_list)
    print(seq_multi_line_str)

    print(gc_content(sequence))

main()

















