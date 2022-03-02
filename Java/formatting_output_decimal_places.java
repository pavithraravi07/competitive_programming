/*

Fill in the missing lines of code so that the program accepts the values for the double variables, price1 and price2 and prints their sum as the output rounding it upto 3 decimal places.

Hint: Use the format specifier as %.3f

*/



import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double price1 = sc.nextDouble();
        double price2 = sc.nextDouble();
        System.out.format("%.3f", price1+price2);
    }
}