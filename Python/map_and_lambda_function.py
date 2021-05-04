"""
Input Format

One line of input: an integer N.

Constraints
0 <= N <= 15

Output Format

A list on a single line containing the cubes of the first N fibonacci numbers.

Sample Input

5
Sample Output

[0, 1, 1, 8, 27]
Explanation

The first 5 fibonacci numbers are [0, 1, 1, 2, 3], and their cubes are [0, 1, 1, 8, 27].
"""


cube = lambda x:x**3 # complete the lambda function 

def fibonacci(n):
    l = [0,1]
    for i in range(2,n):
       l.append(l[i-1] + l[i-2])
    return l[0:n]
    # return a list of fibonacci numbers

if __name__ == '__main__':
    n = int(input())
    print(list(map(cube, fibonacci(n))))