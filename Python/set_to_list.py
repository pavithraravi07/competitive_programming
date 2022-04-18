# Fill in the missing lines of code so that the program below prints 1 2 3 4 5 as the output.


duplicatevalues = [1,2,4,5,3,5,4,3,2,1,2]
numberslist = list(set(duplicatevalues))
numberslist.sort()
for n in numberslist:
    print (n, end=" ")