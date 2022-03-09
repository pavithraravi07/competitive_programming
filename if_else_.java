/*

In the below Java program the input will be a positive number representing the age of a person.

Complete the below program by inserting the missing lines of code, so that it prints "senior" if age is greater than or equal to 60. Else it prints "notsenior".

Example Input/Output:
If the input is "25", the output must be "notsenior"
If the input is "65", the output must be "senior"

*/


import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int age = sc.nextInt();

        if (age >= 60) {
            System.out.println("senior");
        } else {
            System.out.println("notsenior");
        }

    }
}