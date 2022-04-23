# Certain numbers which are separated by a space are passed as the input to the program. 
# Fill in the code so that the program prints the product of these numbers.

# Example Input/Output:
# Input:
# 5 10 4

# Output:
# 200



numbers = list(map(int,input().split(" ")))
product=1
for num in numbers:
    product*=num
print (product)