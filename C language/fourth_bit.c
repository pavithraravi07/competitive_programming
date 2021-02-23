/*A binary number is a combination of 1s and 0s. Its nth least significant digit is the nth digit
starting from the right starting with 1. Given a decimal number, convert it to binary and
determine the value of the the 4th least significant digit.

Example
number = 23
• Convert the decimal number 23 to binary number: 2310 = 24 + 22 + 21 + 20 = (10111)2.
• The value of the 4th index from the right in the binary representation is 0.

Function Description
Complete the function fourthBit in the editor below.
fourthBit has the following parameter(s):
int number: a decimal integer
Returns:
int: an integer 0 or 1 matching the 4th least significant digit in the binary representation
of number.*/

#include<stdio.h>
int fourthBit(int number);
int main(){
	int a;
	scanf("%d",&a);
	int c=fourthBit(a);
	printf("%d",c);
	return 0;
}
int fourthBit(int number)
{
	int bit;
	bit = (number >> 3) & 1;
		return bit;
}
