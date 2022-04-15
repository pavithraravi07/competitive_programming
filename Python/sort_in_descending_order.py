# Complete the program so that the output is 100 90 54 35 22



values = [22, 54, 90]
values.append(100)
values.append(35)
values.sort(reverse=True)
for v in values:
    print (v, end=" ")