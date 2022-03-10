/*

A string value is passed as input to the below program. Modify the program so that it should print 'ABCD' if the input is not equal to '123'

*/



import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        boolean is123 = sc.nextLine().equalsIgnoreCase("123");

        //NEGATION operator being used
        if (!is123) {
            System.out.println("ABCD");
        }

    }
}