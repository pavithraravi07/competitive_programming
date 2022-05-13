# Fill in the missing lines of code to define the function findPerimeter to accept 
# variable length arguments 


def findPerimeter(*sides):
    perimeter = 0
    for s in sides:
        perimeter += s
    return perimeter
    

print (findPerimeter(5,4,3))
print (findPerimeter(10,10,10,10))
print (findPerimeter(200,50,40,80,160))
