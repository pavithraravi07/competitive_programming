/*

Modify the program below so that it prints hundred when the input value of number is 100.

*/


import java.util.Scanner;
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        switch (number) {
            case 100:
                System.out.println("hundred");
                break;

            case 1000:
                System.out.println("thousand");
                break;

            default:
                System.out.println("Not hundred or thousand");
        }
    }
}