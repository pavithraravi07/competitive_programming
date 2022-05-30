# Fill in the missing lines of code,
# so that the function calculateTouristCount adds the input value to the global variable touristcount.

# Example Input/Output:
# Input:
# 200

# Output:
# 3200


touristcount = 3000

def calculateTouristCount(currentcount):
    global touristcount
    touristcount = currentcount+touristcount

currcount = int(input())
calculateTouristCount(currcount)
print (touristcount)