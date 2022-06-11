# The below program has to print the perimeter and area of a rectangle
# separated by a space for the length and breadth passed as the input.

# Example Input/Output:
# Input:
# 20
# 100

# Output:
# 240
# 2000

# Explanation:
# Perimeter = 2*(length+breadth) = 2*(20+100) = 240
# Area = length*breadth = 20*100 = 2000


def getPerimeterArea(length,breadth):
    return (2*(length+breadth), length*breadth)

length = int(input())
breadth = int(input())
(perimeter,area) = getPerimeterArea(length, breadth)
print (perimeter)
print (area)