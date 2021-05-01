"""
Task

You are given a space separated list of integers. If all the integers are positive, then you need to check if any integer is a palindromic integer.

Input Format

The first line contains an integer N. N is the total number of integers in the list.
The second line contains the space separated list of N integers.

Constraints
0 < N < 100 

Output Format

Print True if all the conditions of the problem statement are satisfied. Otherwise, print False.
"""

n = int(input())
mylist = input().split()
print(all([int(num) > 0 for num in mylist]) and any([num == num[::-1] for num in mylist]))
