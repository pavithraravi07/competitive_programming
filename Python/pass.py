# Fill in the missing lines of code so that the program does not print multiples of 5.

# Example Input/Output:
# Input:
# 10

# Output:
# 1 2 3 4 6 7 8 9


N = int(input())
for num in range(1,N+1):
    if num%5 == 0:
        pass
    else:
        print (num, end=" ")