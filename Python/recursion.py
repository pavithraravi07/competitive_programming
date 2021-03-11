#Function Description
#Complete the factorial function in the editor below. Be sure to use recursion.

#factorial has the following paramter:

#int n: an integer
#Returns

#int: the factorial of n

#Input Format

#A single integer,n (the argument to pass to factorial).





#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the factorial function below.
def factorial(n):
    if n < 2:
        return 1
    else:
        res = n*factorial(n-1)
        return res
  

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    result = factorial(n)

    fptr.write(str(result) + '\n')

    fptr.close()
