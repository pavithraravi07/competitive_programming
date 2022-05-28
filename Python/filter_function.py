# Certain space separated numbers are passed as input to the program.
# Fill in the missing lines of code using filter function to filter and
# print only the odd numbers in the list.

# Example Input/Output:
# Input:
# 16 79 44 33 50 5 57 51 64 80 18 95

# Output:
# 79 33 5 57 51 95



numbers = list(map(int,input().strip().split(" ")))
result = filter(lambda num: num%2, numbers)
for r in result:
    print (r, end=" ")