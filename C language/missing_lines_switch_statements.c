/*

The below program was coded by Anil and the output must be as below.

- If the input is 1, the program must print "gold"
- If the input is 2, the program must print "silver"
- If the input is 3, the program must print "bronze"
- If any other input is provided, the program must print "invalid"
Anil's program is incomplete as it does not implement all the above conditions.
Hence analyse the code and insert the missing lines so that the program can be executed successfully.

*/



#include<stdio.h>
void main()
{
	int input;
	scanf("%d", &input);

	switch(input)
	{
		case 1:
			printF("gold");
			break;
		case 2:
			printF("silver");
			break;
		case 3:
			printF("bronze");
			break;
		default:
			printF("invalid");
			
	}
}