#!/usr/bin/python3

import csv
import sys

# sys.argv[1] is the file of cfdna
# sys.argv[2] is the file of tumor_dna
# sys.argv[3] is the file of gdna

with open(sys.argv[1],"rt",encoding = "ISO-8859-1") as f1:
    reader = csv.reader(f1)
    for row1 in reader:
        if row1[8] == "cfdna":
            with open(sys.argv[3],"rt",encoding = "ISO-8859-1") as f3:
                reader3 = csv.reader(f3)
                for row3 in reader3:
                    if row3[8] == "gdna" and row3[2] == row1[2]:
                        with open(sys.argv[2],"rt",encoding = "ISO-8859-1") as f2:
                            reader2 = csv.reader(f2)
                            for row2 in reader2:
                                if row2[8] != "gdna" and row2[8] != "cfdna" and row2[2] == row1[2]:
                                    print(row1[0], ",", row3[0], ",", row2[0])


