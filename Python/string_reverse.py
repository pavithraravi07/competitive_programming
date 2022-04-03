# Complete the program so that accepts two string values, concatenates them and then 
# prints the reverse of the concatenated value as the output.



str1 = input()
str2 = input()
str3 = str1.strip()+str2.strip()
print (str3[::-1])