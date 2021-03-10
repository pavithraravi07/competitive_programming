#You are given an integer, n. Your task is to print an alphabet rangoli of size n. 
#(Rangoli is a form of Indian folk art based on creation of patterns.)

#Different sizes of alphabet rangoli are shown below:

#size 3

#----c----
#--c-b-c--
#c-b-a-b-c
#--c-b-c--
#----c----

#Input Format

#Only one line of input containing n, the size of the rangoli.

#Output Format

#rint the alphabet rangoli in the format explained above.

#constraints 

#0<n<27


import string
def print_rangoli(size):
    a = string.ascii_lowercase
    for i in range(size-1,-size,-1):
        res = '-'.join(a[size-1:abs(i):-1]+a[abs(i):size])
        print(res.center(4*size-3,'-'))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)