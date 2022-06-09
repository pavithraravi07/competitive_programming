# Fill in the missing lines of code so that the program prints 40 50 60 as the output.


def changevalues(marks):
    marks[0] = 40
    marks = [1,2,3]
    marks[0] = 50
    marks[1] = 60
    marks[2] = 70

studentmarks = [10, 50, 60]
changevalues(studentmarks)
for m in studentmarks:
    print (m, end=" ")
 