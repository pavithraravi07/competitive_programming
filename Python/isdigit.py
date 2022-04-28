# A string value is passed as the input to the program. 
# The program must print YES if the string contains only digits (0 1 2 3 4 5 6 7 8 9). 
# If the string contains any non digit characters, then the program must print NO as the output.



strval = input()
if strval.isdigit():
    print ("YES")
else:
    print ("NO")