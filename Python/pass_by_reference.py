# Fill in the missing lines of code so that the program prints 500 600 700 as the output.


def modifyvalues(items):
    items[0] = 500
    items[1] = 600
    items[2] = 700

numbers = [1,2,3]
modifyvalues(numbers)
for num in numbers:
    print (num, end=" ")