/*

Fill in the lines of code so that the program given below prints yes if the input number is divisible by 5 and less than or equal to 100. Else it prints no.

*/


import java.util.Scanner;
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if(number%5 == 0 && number <= 100){
            System.out.println("yes");
        }else{
            System.out.println("no");
        }
    }
}