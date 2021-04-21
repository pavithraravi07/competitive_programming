"""
Task
You are given a list of n lowercase English letters. For a given integer k, you can select any k indices (assume 1-based indexing) with a uniform probability from the list.

Find the probability that at least one of the k indices selected will contain the letter: 'a'.

Input Format

The input consists of three lines. The first line contains the integer n, denoting the length of the list. The next line consists of n space-separated lowercase English letters, denoting the elements of the list.

The third and the last line of input contains the integer k, denoting the number of indices to be selected.

Output Format

Output a single line consisting of the probability that at least one of the k indices selected contains the letter:'a'.

Note: The answer must be correct up to 3 decimal places.

Constraints
1<=n<=10
1<=k<=n

All the letters in the list are lowercase English letters.
"""


from itertools import combinations

n = int(input())
l = input().split()
k = int(input())

mylist = list(combinations(l,k))
res = [i for i in mylist if 'a' in i]
print(len(res)/len(mylist))