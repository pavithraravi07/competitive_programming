# Certain number of students write both Maths and Chemistry exams.
# The marks scored by them are passed as the input
# The first line contains the marks in Maths exam  (with the marks separated by a space).
# The second line contains the marks in Chemistry exam  (with the marks separated by a space).

#Fill in the code so that the program prints the distinct marks scored in both 
# Maths and Chemistry exams in ascending order.

# Example Input/Output:
# Input:
# 30 50 75
# 75 45 50

# Output:
# 30 45 50 75


mathsmarks = list(map(int, input().split(" ")))
chemistrymarks = list(map(int, input().split(" ")))
distinctmarks= set(mathsmarks+chemistrymarks)
sortedmarks = sorted(distinctmarks)
for mark in sortedmarks:
    print (mark, end=" ") 