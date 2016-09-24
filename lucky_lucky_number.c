#include<stdio.h>
int main()
{
	int t,n,m,flag;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		m=0;
		flag=0;
		while(n>=0)
		{
			if(n%7==0)
			{
				m=n/7;
				flag=1;
				break;
			}
			else
				n=n-4;
		}
		if(flag==1)
			printf("%d\n",7*m);
		else
			printf("-1\n");
	}
	return 0;
}
