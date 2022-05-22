# Fill in the missing lines of code so that the program raises an Exception
# with the input value message, if the input value price is more than 1000.
# Else (if the input price is less than 1000) print "Add To Cart"


price = int(input())
message = input()

try:
    if(price > 1000):
        raise Exception(message)
    print ("Add To Cart")
except Exception as e:
    print (str(e))
 