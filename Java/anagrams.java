/*
Function Description

Complete the isAnagram function in the editor.
isAnagram has the following parameters:
string a: the first string
string b: the second string

Returns
boolean: If a and b are case-insensitive anagrams, return true. Otherwise, return false.

Input Format
The first line contains a string a.
The second line contains a string b.
*/

import java.util.Scanner;

public class Solution {
   static boolean isAnagram(String a, String b) {
        // Complete the function
        char a1[]=a.toLowerCase().toCharArray(); 
        char b1[]=b.toLowerCase().toCharArray();

        java.util.Arrays.sort(a1);
        java.util.Arrays.sort(b1);

        return java.util.Arrays.equals(a1,b1);
    }
    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}