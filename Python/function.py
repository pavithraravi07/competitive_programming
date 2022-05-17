#  print the perimeter and area of a rectangle separated by a space
# for the length and breadth passed as the input.


def getPerimeterArea(length,breadth):
    return (2*(length+breadth), length*breadth)

length = int(input())
breadth = int(input())
(perimeter,area) = getPerimeterArea(length, breadth)
print (perimeter)
print (area)