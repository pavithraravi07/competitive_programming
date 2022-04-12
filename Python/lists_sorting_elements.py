# Complete the program so that the output is 100 200 300 400 500 700 900


values = [100,700,300,200,900]
values.append(400)
values.append(500)
values.sort()
for v in values:
    print (v, end=" ")