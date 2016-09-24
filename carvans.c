#include<stdio.h>
int main()
{
	int i,t,n,p,q,count;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%d", &q);
		count=1;
		i=n-1;
		while(i--)
		{
			scanf("%d", &p);
			if(q>=p)
			{
				q=p;
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}


