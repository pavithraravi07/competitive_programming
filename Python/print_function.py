//The included code stub will read an integer, n, from STDIN.
//Without using any string methods, try to print the following:
//123...n
//Note that "..." represents the consecutive values in between.

//Input Format
//The first line contains an integer n.

//Output Format
//Print the list of integers from 1 through n as a string, without spaces.

if __name__ == '__main__':
    n = int(input())
    print(*range(1,n+1),sep="")
