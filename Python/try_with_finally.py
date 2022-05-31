# Fill in the missing lines of code so that the program
# prints Done as the last line of the output.



key = input()
countrycapital = {"India":"Delhi", "Srilanka":"Colombo", "China":"Beijing", "Cuba":"Havana", "Germany":"Berlin"}
try:
    capital = countrycapital[key]
except KeyError:
    print ("Key Not Present")
else:
    print (capital)
finally:
    print ("Done")