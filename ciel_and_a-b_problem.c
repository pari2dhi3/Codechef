#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d", &a, &b);
	c=a-b;
	if(c%10==9)
		c--;
	else
		c++;
	printf("%d\n", c);
	return 0;
}


