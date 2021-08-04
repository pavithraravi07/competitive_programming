/*
Input Format
The first line has an integer n. In each of the next n lines there will be an integer d denoting number of integers on that line and then there will be d space-separated integers. In the next line there will be an integer q denoting number of queries. Each query will consist of two integers x and y.

Output Format
In each line, output the number located in yth position of xth line. If there is no such position, just print "ERROR!"
*/



import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int d,q,x,y;
        ArrayList[] set = new ArrayList[n];
        for(int i=0;i<n;i++){
            d = in.nextInt();
            set[i] = new ArrayList();
            for(int j=0;j<d;j++){  
                set[i].add(in.nextInt());                
            }
        }
        q=in.nextInt();
        for(int i=0;i<q;i++){
            x=in.nextInt();
            y=in.nextInt();
            try{
                System.out.println(set[x-1].get(y-1));
            } catch(Exception e){
                System.out.println("ERROR!");
            }
        }
    }
}
