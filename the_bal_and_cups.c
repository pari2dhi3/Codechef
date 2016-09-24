#include<stdio.h>
int main()
{
	int t,n,c,q,l,r,i,j;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &n, &c, &q);
		for(i=0;i<q;i++)
		{
			scanf("%d %d", &l, &r);
			if((c>=l)&(c<=r))
			{
				c=r+l-c;
			}
		}
		printf("%d\n",c);
	}
	return 0;
}


