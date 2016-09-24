#include<stdio.h>
int a[100];
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int binary_search(int length, int l, int u)
{
	int mid;
	mid=(l+u)/2;
	if(l<=u)
	{
		if(length==a[mid])
			return mid;
		else if(length>a[mid])
			return binary_search(length,mid+1,u);
		else
			return binary_search(length,l,mid-1);
	}
	else
		return -1;
}

int main()
{
	int i,t,k,n,w,l,u,length;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		scanf("%d", &k);
		length=a[k-1];
		qsort(a,n, sizeof(int), cmpfunc);
		l=0;
		u=n-1;
		w=binary_search(length,l,u);
		printf("%d\n", w+1);
	}
}
