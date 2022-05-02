# A string value containing more than one word is passed as the input to the program.
# The program must print all the words starting with the letter t

# Example Input/Output:
# Input:
# I went to the movie yesterday

# Output:
# to the



strval = input()
words = strval.split(" ")
for w in words:
    if w.startswith("t"):
        print (w,end=" ")