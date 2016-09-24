#include<stdio.h>
int main()
{
	int n,count;
	scanf("%d", &n);
	if(n>=1&&n<=9)
		printf("%d\n",n);
	if(n>=10&&n<=99)
	{
		count=(n-9)*2+9;
		printf("%d\n", count);
	}
	if(n>=100&&n<=999)
	{
		count=(n-99)*3+189 ;
		printf("%d\n",count);
	}
	if(n>=1000&&n<=9999)
	{
		count=(n-999)*4+2889;
		printf("%d\n", count);
	}
	if(n>=10000&&n<=99999)
	{
		count=(n-9999)*5+38889;
		printf("%d\n",count);
	}
	if(n>=100000&&n<=999999)
	{
		count=(n-99999)*6+488889;
		printf("%d\n", count);
	}
	if(n>=1000000&&n<=9999999)
	{
		count=(n-999999)*7+5888889;
		printf("%d\n",count);
	}
	if(n>=10000000&&n<=99999999)
	{
		count=(n-9999999)*8+68888889;
		printf("%d\n", count);
	}
	if(n>=100000000&&n<=999999999)
	{
		count=(n-99999999)*9+788888889;
		printf("%d\n", count);
	}
	if(n==1000000000)
	{
		count=298954307;
		printf("%d\n", count);
	}
	return 0;
}
