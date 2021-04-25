"""
Task
You are given a set a and n other sets.
Your job is to find whether set a is a strict superset of each of the n sets.

Print True, if a is a strict superset of each of the n sets. Otherwise, print False.

A strict superset has at least one element that does not exist in its subset.

Input Format

The first line contains the space separated elements of set a.
The second line contains integer n, the number of other sets.
The next n lines contains the space separated elements of the other sets.

Output Format

Print True if set a is a strict superset of all other n sets. Otherwise, print False.
"""



a = set(input().split())
print(all([a.issuperset(set(input().split())) for _ in range(int(input()))]))