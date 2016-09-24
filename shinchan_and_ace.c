#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)a - *(int*)b );
}
int main()
{
	int t,n,a[500],p,q,i,flag;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		qsort(a, n, sizeof(int), cmpfunc);
		flag=0;
		if(n==1)
			flag=1;
		else
		{
			p=a[n-1];
			q=a[n-2];
			for(i=(n-3);i>=0;i--)
			{
				if(p>q)
					q=q+a[i];
				else if(p<q)
					p=p+a[i];
				else
					p=p+a[i];
			}
		}
		if((p==q)&&(flag==0))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}




