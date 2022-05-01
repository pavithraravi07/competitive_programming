# A string value containing more than one word is passed as the input to the program.
# Toggle the case of the letters only in the first word.

# Example Input/Output:
# Input:
# This is my HOME

# Output:
# tHIS is my HOME


strval = input()
words = strval.split(" ")
print (words[0].swapcase(), end=" ")
for w in words[1::]:
    print (w,end=" ")
