/*Two strings A and B comprising of lower case English letters are compatible if they are equal
or can be made equal by following this step any number of times:
• Select a prefix from the string A (possibly empty), and increase the alphabetical value of
all the characters in the prefix by the same valid amount. For example, if the string is xyz
and we select the prefix xy then we can convert it to yx by increasing the alphabetical
value by 1. But if we select the prefix xyz then we cannot increase the alphabetical value.
Your task is to determine if given strings A and B are compatible.

Input format
First line: String A
Next line: String B

Output format
For each test case, print YES if string A can be converted to string B, otherwise print NO.*/

char str1[1000005];
	char str2[1000005];
 
	scanf("%s",str1);
	scanf("%s",str2);
 
	int max = str2[0] - str1[0];
 
	if(max > 0){
		for(int i =1;i<strlen(str1);i++){
			int x = str2[i] - str1[i];
			if(x > max){
				printf("NO");
				return 0;
			}
		}
		printf("YES");
	}
	else{
		printf("NO");
	}
