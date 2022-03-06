/*

Complete the below program by inserting the missing lines of code, so that it prints true if first number is not equal to second number. Else it prints false

*/




import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int firstNum = sc.nextInt();
        int secondNum = sc.nextInt();

        boolean notequal = (firstNum != secondNum);
        System.out.println(notequal);
    }
}