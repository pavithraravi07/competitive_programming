"""
Task
You are given a function f(x)=x^2. You are also given k lists. The i^th list consists of ni elements.

You have to pick one element from each list so that the value from the equation below is maximized:

s = (f(x1)+f(x2)+...+f(xk)) % m

xi denotes the element picked from the i^th list . Find the maximized value smax obtained.

 denotes the modulo operator.

Note that you need to take exactly one element from each list, not necessarily the largest element. You add the squares of the chosen elements and perform the modulo operation. The maximum value that you can obtain, will be the answer to the problem.

Input Format

The first line contains 2 space separated integers k and m.
The next k lines each contains an integer ni, denoting the number of elements in the i^th list, followed by ni space separated integers denoting the elements in the list.

Output Format

Output a single integer denoting the value smax.

Sample Input

3 1000
2 5 4
3 7 8 9 
5 5 7 8 9 10 

Sample Output

206
"""


from itertools import product

k, m = map(int, input().split())

n = (list(map(int, input().split()))[1:] for _ in range(k))

res = map(lambda x: sum(i**2 for i in x) % m, product(*n))

print(max(res))
