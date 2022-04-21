# The age of a person is passed as the input. The program must print the output based on the value 
# of the age as given below.
# - If the value of age is from 1 to 12, the output must be Child
# - If the value of age is from 13 to 19, the output must be Teen
# - If the value of age is 20 or more, the output must be Adult



age = int(input())
if age >= 1 and age <= 12:
    print ("Child")
elif age >= 13 and age <= 19:
    print ("Teen")
elif age >= 20:
    print ("Adult")