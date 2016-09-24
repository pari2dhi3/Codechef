#include<stdio.h>
#include<math.h>
int main()
{
	long long int n, m,flag,count;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%lld", &n);
		if(n==1)
		{
			m=2;
			flag=1;
		}
		else
		{
			n=n+1;
			count=0;
			flag=0;
			while(n%2==0)
			{
				n=n/2;
				count++;
				if(n==1)
				{
					m=pow(2,(count-1));
					m=m-1;
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			printf("%lld\n", m);
		else
			printf("-1\n");
	}
	return 0;
}
