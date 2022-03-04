/*

Fill in the missing lines of code so that the program prints the unit digit of the integer x.

Hint: The unit digit of a number is nothing but the remainder when the number is divided by 10.

*/




import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        System.out.println(x%10);
    }
}