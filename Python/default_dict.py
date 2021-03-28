#Input Format

#The first line contains integers, n and m separated by a space.
#The next n lines contains the words belonging to group A.
#The next m lines contains the words belonging to group B.

#Output Format

#Output m lines.
#The i^th line should contain the 1-indexed positions of the occurrences of the i^th word separated by spaces.

#Sample Input

#STDIN   Function
#-----   --------
#5 2     group A size n = 5, group B size m = 2
#a       group A contains 'a', 'a', 'b', 'a', 'b'
#a
#b
#a
#b
#a       group B contains 'a', 'b'
#b

#Sample Output

#1 2 4
#3 5


from collections import defaultdict
d = defaultdict(list)

n, m = map(int,input().split())

for i in range(n):
    d[input()].append(i+1)
    
for _ in range(m):
    word = input().strip()
    if word in d:
        print(" ".join(map(str,(d[word]))))
    else:
        print(-1)