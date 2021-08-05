/*
Input Format

The first line will have an integer n denoting the number of entries in the phone book. Each entry consists of two lines: a name and the corresponding phone number.

After these, there will be some queries. Each query will contain a person's name. Read the queries until end-of-file.

Constraints:
A person's name consists of only lower-case English letters and it may be in the format 'first-name last-name' or in the format 'first-name'. Each phone number has exactly 8 digits without any leading zeros.

Output Format

For each case, print "Not found" if the person has no entry in the phone book. Otherwise, print the person's name and phone number. See sample output for the exact format.

To make the problem easier, we provided a portion of the code in the editor. You can either complete that code or write completely on your own.
*/


import java.util.*;
import java.io.*;

class Solution{
	public static void main(String []argh)
    {
        Scanner scan = new Scanner(System.in);
        int contacts = scan.nextInt();
        scan.nextLine();
        Map<String, Integer> map = new HashMap<>(contacts);
        for(int i=0; i < contacts; i++)
        {
            String name = scan.nextLine().trim();
            int phone = scan.nextInt();
            scan.nextLine();
            map.put(name, phone);
        }        

        while(scan.hasNext())
        {
            String query = scan.nextLine().trim();
            if(map.containsKey(query))
            {
                System.out.println(query + "=" + map.get(query));
            }
            else
            {
                System.out.println("Not found");
            }
        }
        scan.close();
    }
}

