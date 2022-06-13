# The program must accept the name of a class teacher, class leader and remaining students. Then the program must print the output as shown below.

# Example Input/Output:
# Input:
# Sheela
# Balakrishnan
# Ramya
# Malini
# Arun

# Output:
# Teacher-Sheela
# Leader-Balakrishnan
# Ramya Malini Arun



def printClassInfo(teacher, leader, *students):
    print ("Teacher-"+teacher)
    print ("Leader-"+leader)
    for stud in students:
        print (stud, end=" ")
    print ("")
        
printClassInfo("Sheela", "Balakrishnan", "Ramya", "Arun", "Malini")
printClassInfo("Melina", "Joseph", "Kavitha", "Muzambil", "Razana", "Mayank", "Sasikala")