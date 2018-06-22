
import csv
import sys

dict1 = {}.fromkeys(("gdna", "cfdna", "tumor_dna"))

with open(sys.argv[1],"rt",encoding = "ISO-8859-1") as f1:
    reader = csv.reader(f1)
    for row1 in reader:
        if row1[8] == "gdna":
            if dict1["gdna"] is None:
                dict1["gdna"] = row1
            else:
                dict1["gdna"].append(row1)
        elif row1[8] == "cfdna":
            if dict1["cfdna"] is None:
                dict1["cfdna"] = row1
            else:
                dict1["cfdna"].append(row1)
        else:
            if dict1["tumor_dna"] is None:
                dict1["tumor_dna"] = row1
            else:
                dict1["tumor_dna"].append(row1)
            
    for k, v in dict1.items():
        print(k,v)


