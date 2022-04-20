# Fill in the missing lines of code to print the first and middle letters of the odd length input 
# string.

# Example Input/Output 1:
# Input:
# CRYBABY

# Output:
# CB



inputstr = input()
inputlength = len(inputstr)
print (inputstr[0]+inputstr[inputlength//2])