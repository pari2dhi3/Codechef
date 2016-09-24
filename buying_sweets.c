#include<stdio.h>
int main()
{
	int t,n,x,a,i,p,min;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &x);
		scanf("%d", &p);
		min=p;
		for(i=1;i<n;i++)
		{
			scanf("%d", &a);
			if(a<=min)
				min=a;
			p=p+a;
		}
		if((p%x)>=min)
			printf("-1\n");
		else
			printf("%d\n", p/x);
	}
	return 0;
}
			
