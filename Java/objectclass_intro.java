/*

The student class is given below.

public class Student {

    private String name;
    private String registrationNumber;

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getRegistrationNumber() {
        return registrationNumber;
    }

    public void setRegistrationNumber(String registrationNumber) {
        this.registrationNumber = registrationNumber;
    }
}
Fill in the missing lines of code so that the below program prints the student's name as Larsen and the registration number as 12345

Hint: Use the setName and setRegistrationNumber methods to set the values.

*/


public class Hello {

    public static void main(String[] args) {
        Student s1 = new Student();
        s1.setName("Larsen");
        s1.setRegistrationNumber("12345");
        System.out.println(s1.getName());
        System.out.println(s1.getRegistrationNumber());
    }
}