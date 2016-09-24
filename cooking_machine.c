#include<stdio.h>
int main()
{
	int t,a,b,x,count;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		count=0;
		while(a!=b)
		{
			if(b%a==0)
			{
				x=b/a;
				while(x!=1)
				{
					x=x/2;
					count++;
				}
				break;
			}
			else if(a%2==0)
			{
				a=a/2;
				count++;
			}
			else
			{
				a=(a-1)/2;
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}


