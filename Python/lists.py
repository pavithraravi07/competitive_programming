#Consider a list (list = []). You can perform the following commands:

#insert i e: Insert integer e at position i.
#print: Print the list.
#remove e: Delete the first occurrence of integer e.
#append e: Insert integer e at the end of the list.
#sort: Sort the list.
#pop: Pop the last element from the list.
#reverse: Reverse the list.
#Initialize your list and read in the value of n followed by n lines of commands where each command will be of the 7 types listed above. 
#Iterate through each command in order and perform the corresponding operation on your list.

#Input Format
#The first line contains an integer, n, denoting the number of commands.
#Each line i of the n subsequent lines contains one of the commands described above.

#Output Format
#For each command of type print, print the list on a new line.

if __name__ == '__main__':
    N = int(input())
    mylist = []
    for _ in range(N):
        action = input()
        action = action.split()
        if action[0] == "insert":
            n1 = int(action[1])
            n2 = int(action[2])
            mylist.insert(n1,n2)
        elif action[0] == "print":
            print(mylist)
        elif action[0] == "remove":
            n1 = int(action[1])
            mylist.remove(n1)
        elif action[0] == "append":
            n1 = int(action[1])
            mylist.append(n1)
        elif action[0] == "sort":
            mylist.sort()
        elif action[0] == "pop":
            mylist.pop()
        elif action[0] == "reverse":
            mylist.reverse()