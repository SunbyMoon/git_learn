#!/usr/bin/python3

class Fasta(object):
    def __init__(self, name, sequence):
        self.name = name
        self.sequence = sequence

def read_fasta(file):
    items = []
    index = 0
    for line in file:
        if line.startswith(">"):
            if index >= 1:
                items.append(aninstance)
            index += 1
            name = line.strip()
            seq = ''
            aninstance = Fasta(name, seq)
        else:
            seq += line.strip()
            aninstance = Fasta(name, seq)

    items.append(aninstance)
    return items

def read_seqs(file):
    items = []
    seq = ''
    index = 0
    for line in file:
        if line.startswith(">"):
            if index >= 1:
                items.append(seq)
                seq = ''
            index += 1
        else:
            seq += line[:-1]
    items.append(seq)
    return items

def format_output(sequence, length):
    temp = []
    for j in range(0, len(sequence), length):
        temp.append(sequence[j:j+length])
        return '\n'.join(temp)

def complement(seq):
    complement = {"A":"T", "T":"A", "C":"G", "G":"C"}
    complseq = [complement[base] for base in seq]

def reverse_complement(seq):
    seq = list(seq)
    seq.reverse()
    return ''.join(complement(seq)

def transcribe(seq):
    RNA = seq.replace("T", "U")
    return RNA
































