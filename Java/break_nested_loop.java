/*

Modify the code below by introducing a break statement so that the program output is as below.
5
10
100
5
10
99
5
10

*/
public class Hello {
	public static void main(String[] args) 
 	{
        int counter=100;
        while(counter > 10){
            for(int innercounter=5;innercounter<=10;innercounter+=5){
                System.out.println(innercounter);
            }
            if(counter==98)
                break;
            System.out.println(counter);
            counter--;
        }
    }//eof main method
}