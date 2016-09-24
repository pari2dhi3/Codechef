#include<stdio.h>
int main()
{
	int t,a,b,count;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		count=0;
		while((a!=2)&&(b!=2))
		{
			if(b>a)
			{
				if(b%2==0)
				{
					b=b/2;
					a=b;
					count++;
				}
				else
				{
					b=b/2;
					a=b+1;
					count++;
				}
			}
			else
				if(a%2==0)
				{
					a=a/2;
					b=a;
					count++;
				}
				else
				{
					a=a/2;
					b=a+1;
					count++;
				}
		}
		if(count%2==0)
			printf("Vanka\n");
		else
			printf("Tuzik\n");
	}
	return 0;
}

