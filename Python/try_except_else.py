# Fill in the missing lines of code so that the program
# prints "Valid" when the input value for x is from 1 to 100 and
# prints "Invalid" for any other input value.


x = int(input())
try:
    assert(1 <= x and x <= 100)
except AssertionError:
    print ("Invalid")
else:
    print ("Valid")
 