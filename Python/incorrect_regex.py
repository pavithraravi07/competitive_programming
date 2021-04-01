#Task

#You are given a string S.
#Your task is to find out whether S is a valid regex or not.

#Input Format

#The first line contains integer T, the number of test cases.
#The next T lines contains the string S.

#Output Format

#Print "True" or "False" for each test case without quotes.


import re

for _ in range(int(input())):
    s = input()
    
    try:
        re.compile(s)
        print("True")
    except re.error:
        print("False")
