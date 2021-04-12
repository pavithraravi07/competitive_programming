"""

Task
There is an array of n integers. There are also 2 disjoint sets, A and B, each containing m integers. 
You like all the integers in set A and dislike all the integers in set B. Your initial happiness is 0. 
For each i integer in the array, if i belongs to A, you add 1 to your happiness. 
If i belongs to B, you add -1 to your happiness. Otherwise, your happiness does not change. 
Output your final happiness at the end.

Note: Since A and B are sets, they have no repeated elements. However, the array might contain duplicate elements.


Input Format

The first line contains integers  and  separated by a space.
The second line contains  integers, the elements of the array.
The third and fourth lines contain  integers,  and , respectively.

Output Format

Output a single integer, your total happiness.

"""


n, m = input().split()
myarray = input().split()
set_a = set(input().split())
set_b = set(input().split())
happiness = 0
for i in myarray:
    if i in set_a:
        happiness += 1
    if i in set_b:
        happiness -= 1
print(happiness)
