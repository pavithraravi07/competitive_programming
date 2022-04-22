# A number is passed as the input to the program. The program must print the output based on the 
# conditions given below.
# - If the input number is odd and less than or equal to 1000, 
# then the output must be double the number.
# - If the input number is odd and more than 1000 but less than or equal to 10000, 
# then the output must be 200 less than the given number.
# - If the input number is odd and more than 10000, 
# then the output must be 5000 less than the given number.
# - Else the input number is printed as such.



num = int(input())
if num%2 == 1:
    if num <= 1000:
        print (num*2)
    elif num <= 10000:
        print(num-200)
    else:
        print (num-5000)
else:
    print (num)
 