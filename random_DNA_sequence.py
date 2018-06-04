#!/haplox/users/huang/huangFqc/anaconda3/bin/python

import random
from random import choice

def String(length):
    DNA = ""
    for count in range(length):
        DNA += choice("ATCG")
    return DNA

#def DNA(length2):
#    return "".join(random.choice('ATCG') for _ in range(length2))

def main():
    print(String(120))
#    print(DNA(120))
if __name__ == "__main__":
    for x in range(100):
        main()
