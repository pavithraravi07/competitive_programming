#Task

#You are given a string s.
#Your task is to print all possible combinations, up to size k, of the string in lexicographic sorted order.

#Input Format

#A single line containing the string s and integer value k separated by a space.

#Output Format

#Print the different combinations of string s on separate lines.



from itertools import combinations
s, k = input().split()
for i in range(int(k)):
    print(*map("".join,combinations(sorted(s),i+1)),sep='\n')
