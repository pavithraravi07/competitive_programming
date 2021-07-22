/*
Given a string, s, and an integer, k, complete the function so that it finds the lexicographically smallest and largest substrings of length k.

Function Description

Complete the getSmallestAndLargest function in the editor below.

getSmallestAndLargest has the following parameters:

string s: a string
int k: the length of the substrings to find
Returns

string: the string ' + "\n" + ' where and are the two substrings
Input Format

The first line contains a string denoting s.
The second line contains an integer denoting k.
*/


import java.util.Scanner;

public class Solution {
    public static String getSmallestAndLargest(String s, int k) {
        String sequence = s.substring(0, k);
        String smallest = sequence;
        String largest = sequence;

        // Complete the function
        // 'smallest' must be the lexicographically smallest substring of length 'k'
        // 'largest' must be the lexicographically largest substring of length 'k'
        int len = s.length() - k;
        for(int i = 1; i <= len; i++){
            sequence = s.substring(i, (i + k));

            if(sequence.compareTo(smallest) < 0){
                smallest = sequence;
            }   
            if(sequence.compareTo(largest) > 0){
                largest = sequence;
            }            
        }
        
        return smallest + "\n" + largest;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.next();
        int k = scan.nextInt();
        scan.close();
      
        System.out.println(getSmallestAndLargest(s, k));
    }
}
