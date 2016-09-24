#include<stdio.h>
long long int a[100];
int main()
{
	int t,flag;
	long long int n,i,count,o,e;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld", &n);
		flag=0;
		i=2;
		o=2;
		e=4;
		a[0]=1;
		a[1]=2;
		a[2]=3;
		if(n==1)
		{
			count=1;
			flag=1;
		}
		else if(n==2)
		{
			count=2;
			flag=1;
		}
		else if(n==3)
		{
			count=3;
			flag=1;
		}
		else
			count=2;
		while((n>=a[i])&&(flag==0))				
		{
			if(((i+1)%2)!=0)
			{
				a[i+1]=e+1;
				o=o+a[i+1];
				count++;
			}
			else if(((i+1)%2)==0)
			{
				a[i+1]=o+1;
				e=e+a[i+1];
				count++;
			}
			i++;
		}
		printf("%lld\n", count);
	}
	return 0;
}

