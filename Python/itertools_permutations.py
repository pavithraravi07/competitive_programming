#Task

#You are given a string S.
#Your task is to print all possible permutations of size k of the string in lexicographic sorted order.

#Input Format

#A single line containing the space separated string S and the integer value k.

#Constraints

#0<k<=len(S)

#The string contains only UPPERCASE characters.

#Output Format

#Print the permutations of the string S on separate lines.



from itertools import permutations
s , k = input().split()
res = list(permutations(s,int(k)))
res.sort()
print(*[''.join(i) for i in res], sep = '\n')