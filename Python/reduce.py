# Certain space separated numbers are passed as input to the program.
# Fill in the missing lines of code to find the maximum number and
# store it in maxnum which is printed as the output.

# Example Input/Output:
# Input:
# 10 4 181 76 223 211

# Output:
# 223


from functools import reduce
numbers = list(map(int,input().strip().split(" ")))
maxnum = reduce(lambda x,y: x if x > y else y, numbers)
print (maxnum)