# Declare an empty set marks so that the output of the program is 100.


marks = set()
marks.add(40)
marks.add(60)
marks.add(40)
marks.add(60)
total = 0
for m in marks:
    total+=m
print (total)