#Task

#Perform append, pop, popleft and appendleft methods on an empty deque d.

#Input Format

#The first line contains an integer N, the number of operations.
#The next N lines contains the space separated names of methods and their values.

#Constraints

#0<N<=1000

#Output Format

#Print the space separated elements of deque d.


from collections import deque
d = deque() 
for _ in range(int(input())):
    m = input().split()
    if m[0] == "append":
        d.append(m[1])
    if m[0] == "pop":
        d.pop()
    if m[0] == "appendleft":
        d.appendleft(m[1])
    if m[0] == "popleft":
        d.popleft()
print(*d)
