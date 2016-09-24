#include<stdio.h>
int main()
{
	int k,s,t,n,max,lead,w;
	lead=0;
	max=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d %d",&s,&t);
		k=s-t;
		lead=lead+k;
		if(max<=lead && lead>0)
		{
			max=lead;
			w=1;
		}
		else if(max<=(-1)*lead && lead<0)
		{	max=(-1)*lead;
			w=2;
		}
	}
	printf("%d %d\n",w, max);
return 0;
}
	
