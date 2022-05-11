# Fill in the misssing lines of code so that the program 
# prints YES if the key Mobile is present in the dictionary itembrand.
# Else the program prints NO as the output.



itembrand = {}
inputpairs = list(input().split(" "))
for index in range (0, len(inputpairs),2):
    itembrand[inputpairs[index]] = inputpairs[index+1]
if "Mobile" in itembrand:
    print ("YES")
else:
    print ("NO")
 