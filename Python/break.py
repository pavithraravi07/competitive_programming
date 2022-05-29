# Fill in the missing lines of code so that the program
# prints from the input value N to the next multiple of 9.

# Example Input/Output:
# Input:
# 12

# Output:
# 12 13 14 15 16 17 18



N = int(input())
for num in range(N,N+9):
    print (num, end=" ")
    if num%9 == 0:
        break
 