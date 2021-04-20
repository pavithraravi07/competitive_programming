"""
Task
You are given a string s. It consists of alphanumeric characters, spaces and symbols(+,-).
Your task is to find all the substrings of s that contains 2 or more vowels.
Also, these substrings must lie in between 2 consonants and should contain vowels only.

Note :
Vowels are defined as: AEIOU and aeiou.
Consonants are defined as: QWRTYPSDFGHJKLZXCVBNM and qwrtypsdfghjklzxcvbnm.

Input Format

A single line of input containing string s.

Constraints
0<len(s)<100

Output Format

Print the matched substrings in their order of occurrence on separate lines.
If no match is found, print -1.
"""


import re
v = "aeiou"
c = "qwrtypsdfghjklzxcvbnm"
m = re.findall(r"(?<=[%s])([%s]{2,})[%s]" % (c, v, c), input(), flags = re.I)
print('\n'.join(m or ['-1']))