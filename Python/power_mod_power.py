#Task
#You are given three integers: a, b, and m. Print two lines.
#On the first line, print the result of pow(a,b). On the second line, print the result of pow(a,b,m).

#Input Format
#The first line contains a, the second line contains b, and the third line contains m.


a = int(input())
b = int(input())
m = int(input())
print(pow(a,b),pow(a,b,m),sep='\n')