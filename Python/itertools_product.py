#Task

#You are given a two lists A and B. Your task is to compute their cartesian product A X B.

#Input Format

#The first line contains the space separated elements of list A.
#The second line contains the space separated elements of list B.

#Both lists have no duplicate integer elements.

#Output Format

#Output the space separated tuples of the cartesian product.


from itertools import product
A = []
B = []
A = [int(ele) for ele in input().split()] 
B = [int(ele) for ele in input().split()]
print(*product(A,B))