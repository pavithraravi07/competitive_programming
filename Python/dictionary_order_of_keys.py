# A list of items with their price is passed as the input.
# Fill in the missing lines of code so that the program accepts the input and
# store them in a dictionary called itemprice
# where the order of input is preserved while iterating the keys.

# Example Input/Output:
# Input:
# PenDrive Rs.200 Mouse Rs.350 Keyboard Rs.450 Harddisk Rs.2300

# Output:
# PenDrive Rs.200
# Mouse Rs.350
# Keyboard Rs.450
# Harddisk Rs.2300



import collections
inputpairs = list(input().split(" "))
inputlist = []
for index in range (0, len(inputpairs),2):
    currpair=(inputpairs[index],inputpairs[index+1])
    inputlist.append(currpair)
itemprice = collections.OrderedDict(inputlist)
for key in itemprice.keys():
    print (key+" "+itemprice[key])