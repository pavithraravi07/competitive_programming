/*

In the below Java program the input will be a positive number represented by count.
Complete the below program by inserting the single missing line of code containing the for loop or while loop, so that it prints from 1 to count.

Example Input/Output:
If the input is "5", the output must be "1 2 3 4 5"
If the input is "9", the output must be "1 2 3 4 5 6 7 8 9"

*/


// for loop solution:

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();

        for (int ctr = 1; ctr <= count; ctr++) {
            System.out.print(ctr+" ");
        }
    }
}
// while loop solution

import java.util.Scanner;

public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int count = sc.nextInt();

        int ctr = 1;
        while (ctr <= count) {
            System.out.print(ctr+" ");
            ctr++;
        }
    }
}