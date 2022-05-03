# Certain space separated numbers are passed as the input to the program.
# The program must print only the even numbers in the reverse order of their occurrence in the 
# input sequence.

# Example Input/Output:
# Input:
# 10 99 23 12 78 81 102

# Output:
# 102 78 12 10



numbers = list(map(int, input().split(" ")))
for num in numbers[::-1]:
    if num%2 == 0:
        print (num,end=" ")
