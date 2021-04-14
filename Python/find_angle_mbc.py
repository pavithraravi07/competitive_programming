"""
Task
Your task is to find <MBC (angle) in degrees.

Input Format

The first line contains the length of side AB.
The second line contains the length of side BC.

Constraints
0 < AB <=100
0 <BC <= 100
Lengths AB and BC are natural numbers.

Output Format

Output <MBC in degrees.

Note: Round the angle to the nearest integer.

"""


import math
ab = int(input())
bc = int(input())
angle = math.degrees(math.atan2(ab,bc))
print(str(round(angle))+chr(176))