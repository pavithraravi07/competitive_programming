#Input Format

#The first line of input contains the original string. The next line contains the substring.

#Output Format

#Output the integer number indicating the total number of occurrences of the substring in the original string.

def count_substring(string, sub_string):
    l = len(string)
    s = len(sub_string)
    cnt = 0
    for i in range(l):
        if (string[i : i+s] == sub_string):
            cnt = cnt + 1
    return cnt

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)

    