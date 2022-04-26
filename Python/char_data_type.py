# A single letter is passed as input to the program. If the letter is equal to m or M, 
# the program must print MALE. If the letter is equal to f or F, the program must print FEMALE. 
# If any other value is passed as input, the program must print UNKNOWN


inputletter = input()
if inputletter == 'm' or inputletter == 'M':
    print ("MALE")
elif inputletter == 'f' or inputletter == 'F':
    print ("FEMALE")
else:
    print ("UNKNOWN")