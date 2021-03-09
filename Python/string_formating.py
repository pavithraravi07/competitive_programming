#Given an integer, n, print the following values for each integer i from 1 to n:

#Decimal
#Octal
#Hexadecimal (capitalized)
#Binary
#The four values must be printed on a single line in the order specified above for each i from 1 to n. 
#Each value should be space-padded to match the width of the binary value of n.

#Input Format
#A single integer denoting n.

#Output Format
#Print n lines where each line i (in the range 11<=i<=n) contains the respective decimal, octal, capitalized hexadecimal, and binary values 
#of i. 
#Each printed value must be formatted to the width of the binary value of n.

def print_formatted(number):
    # your code goes here
    l=len(bin(number)[2:])
    for i in range(1,number+1):
        print(str(i).rjust(l)+' '+oct(i)[2:].rjust(l)+' '+hex(i)[2:].upper().rjust(l)+' '+bin(i)[2:].rjust(l))

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)