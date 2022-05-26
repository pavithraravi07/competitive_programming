# Certain space separated numbers are passed as input to the program.
# Fill in the missing lines of code using map function to multiply each number by 5 and
# print the resultant values separated by a space.

# Example Input/Output:
# Input:
# 10 4 18

# Output:
# 50 20 90



numbers = list(map(int,input().strip().split(" ")))
fivetimes = map(lambda num: num*5, numbers)
for n in fivetimes:
    print (n, end=" ")