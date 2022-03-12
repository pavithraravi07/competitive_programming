/*

Fill in the lines of code so that the program prints yes if the input number is divisible by 3 or 9. Else it prints no.

*/



import java.util.Scanner;
public class Hello {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int number = sc.nextInt();
        if(number%3==0 || number%9==0){
            System.out.println("yes");
        }else
        {
            System.out.println("no");
        }
    
    }
}