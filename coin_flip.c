#include<stdio.h>
int main()
{
	int t,g,i,n,q;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &g);
		while(g--)
		{
			scanf("%d %d %d", &i, &n, &q);
			if(n%2==0)
				printf("%d\n", n/2);
			if((n%2!=0)&&(i==q))
				printf("%d\n",n/2);
			if((n%2!=0)&&(i!=q))
				printf("%d\n",(n/2)+1);
		}
	}
	return 0;
}
