/*

Use continue statement in the program below to ensure only the numbers divisible by 5 from 1 to 25 are printed.

*/


public class Hello {
public static void main(String[] args) {
        for (int counter = 1; counter <= 25; counter++) {
        if (counter % 5 != 0) 
            continue;
        System.out.println(counter);
        }
    }
}