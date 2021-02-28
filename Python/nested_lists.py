#Given the names and grades for each student in a class of N students, store them in a nested list and print the name(s) of any student(s) 
#having the second lowest grade.

#Note: If there are multiple students with the second lowest grade, order their names alphabetically and print each name on a new line.

#Input Format

#The first line contains an integer,N , the number of students.
#The 2N subsequent lines describe each student over 2 lines.
#- The first line contains a student's name.
#- The second line contains their grade.

#Output Format

#Print the name(s) of any student(s) having the second lowest grade in. If there are multiple students, order their names alphabetically 
#and print each one on a new line.

if __name__ == '__main__':
    records = [[input(), float(input())] for _ in range(int(input()))]
    second_highest = sorted(list(set([marks for name, marks in records])))[1]
    print('\n'.join([name for name, marks in sorted(records) if marks == second_highest]))