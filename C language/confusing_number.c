/*Given a number N, return true if and only if it is a confusing number, which satisfies the
following condition:
We can rotate digits by 180 degrees to form new digits. When 0, 1, 6, 8, 9 are rotated 180
degrees, they become 0, 1, 9, 8, 6 respectively. When 2, 3, 4, 5 and 7 are rotated 180 degrees,
they become invalid. A confusing number is a number that when rotated 180 degrees becomes
a different number with each digit valid.*/

#include<stdio.h>
int main(){
	int n,d,rev=0,t;
	int flag=0;
	scanf("%d",&n);
	t=n;
	while(n>0){
		d=n%10;
		if(d==9)
			d=6;
		if(d==6)
			d=9;
		rev=rev*10+d;
		if(d==2||d==3||d==4||d==5||d==7)
			flag=1;
		n=n/10;
	}
	if(flag==1)
		printf("false");
	else if(rev==t)
		printf("false");
	else
		printf("true");
	return 0;
}
