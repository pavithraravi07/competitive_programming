#Function Description

#Complete the merge_the_tools function in the editor below.

#merge_the_tools has the following parameters:

#string s: the string to analyze
#int k: the size of substrings to analyze
#Prints

#Print each subsequence on a new line. There will be n/k of them. No return value is expected.

#Input Format

#The first line contains a single string, s.
#The second line contains an integer, k, the length of each substring.

#Example
#s = 'AAABCADDE'
#k  = 3

#There are three substrings of length 3 to consider: 'AAA', 'BCA' and 'DDE'. The first substring is all 'A' characters, so u1 = 'A'. 
#The second substring has all distinct characters, so U2 = 'BCA'. The third substring has 2 different characters, so U3 = 'DE'. 
#Note that a subsequence maintains the original order of characters encountered. 
#The order of characters in each subsequence shown is important.

#Sample Input

#STDIN       Function
#-----       --------
#AABCAAADA   s = 'AABCAAADA'
#3           k = 3

#Sample Output

#AB
#CA
#AD

def merge_the_tools(string, k):
    while string:
        stripped_string = string[ : k]
        newstring = ''
        for char in stripped_string:
            if char not in newstring:
                newstring += char
        print(newstring)
        string = string[k : ]       

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)