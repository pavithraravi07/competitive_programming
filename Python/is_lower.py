# A string value is passed as the input to the program. 
# Fill in the missing lines of code so that the program prints only the lower case letters in it.

# Example Input/Output:
#  Input:
# gREaTeSCaPe

# Output:
# gaeae


strval = input()
for ch in strval:
    if ch.islower():
        print (ch,end="")