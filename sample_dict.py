#!/usr/bin/python3

import csv
import pprint

dict1 = {}
with open("/haplox/users/liuming/sample_information_sheet.csv", "rt",encoding = "GBK") as f1:
    reader1 = csv.reader(f1)
    for row in reader1:
        if row[3] not in dict1.keys():
           dict1[row[3]] = {}
           dict1[row[3]][row[9]] = row[1]+","+row[0]
        else:
           dict1[row[3]][row[9]] = row[1]+","+row[0]
pprint.pprint(dict1)



