/*

Fill in the missing lines of code so that the program prints the remainder when the sum of four times x and five times y is divided by 6.

*/



import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x=sc.nextInt();
        int y=sc.nextInt();
        int result = (4*x + 5*y)%6;
        System.out.println(result);
         
    }
}