#Input Format

#A single integer, n.

#Output Format

#Print 10 lines of output; each line i (where 1<=i<=10) contains the  of n*i in the form:
#n x i = result.

#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())
    for i in range(1,11):
        print(n,"x",i,"=",n*i)