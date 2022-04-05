# Complete the program so that accepts an input string value and swaps the case from the 
# 3rd character. (Assume the input string is of length > 3)



inputstring = input()
print (inputstring[0:2]+inputstring[2:].swapcase())