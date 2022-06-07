# Fill in the missing lines of code so that the program prints 100 as the output.


def changevalues(x, y, z):
    y[0] = x
    y[1] = z
    x = z
    z = 40

y = [80,90]
x = 30
z = 20
changevalues(x,y,z)
print (x+y[0]+y[1]+z)