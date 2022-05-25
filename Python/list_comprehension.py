# Complete the program using List Comprehension so that the program accepts a M*N matrix
# and prints the sum of elements in the 4 corners.
# - M is the number of rows
# - N is the number of columns.

# Example Input/Output 1:
# Input:
# 3 3
# 1 2 3
# 4 5 6
# 7 8 9

# Output:
# 20

# Explanation:
# The sum of the corner elements is = 1+3+7+9 = 20



rowcolarr = input().split(" ")
rows = int(rowcolarr[0])
cols = int(rowcolarr[1])
arr = [[0]*cols for r in range(rows)]
for r in range(rows):
    arr[r] = [int(cellvalue) for cellvalue in input().strip().split(" ")]

cornersum = arr[0][0]+arr[0][cols-1]+arr[rows-1][0]+arr[rows-1][cols-1] 
print (cornersum)