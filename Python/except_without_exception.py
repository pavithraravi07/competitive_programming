# Fill in the missing lines of code so that the program prints Failure for any Exception
# (like KeyError or IndexError or AssertionError) raised within the try block of code.
# Else the program prints Success



x = int(input())
y = int(input())
name = input()

scores = [40,71,102,34]
batsmanruns = {"Dhoni":350, "Kohli":410, "Smith":212}

try:
    scores[x] += 10
    batsmanscore = batsmanruns[name]
    assert (y > 9), "Very Small Number"
except Exception as e:
    print ("Failure")
else:
    print ("Success")
 