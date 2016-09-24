#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	   return ( *(int*)a - *(int*)b );
}
int main()
{
	int n1, n2, n3, i,j, a[150000],b[50000],count;
	scanf("%d %d %d", &n1,&n2,&n3);
	for(i=0;i<n1;i++)
		scanf("%d", &a[i]);
	for(i=n1;i<(n1+n2);i++)
		scanf("%d", &a[i]);
	for(i=(n1+n2);i<(n1+n2+n3);i++)
		scanf("%d", &a[i]);
	qsort(a, (n1+n2+n3), sizeof(int), cmpfunc);
	count=0;
	j=0;
	for(i=0;i<(n1+n2+n3);)
	{
		if((a[i]==a[i+1])&&(a[i+1]==a[i+2]))
		{
			count++;
			b[j]=a[i];	
			i=i+3;
			j++;
		}
		else if(a[i]==a[i+1])
		{
			count++;
			b[j]=a[i];
			i=i+2;
			j++;
		}
		else
			i++;
	}
	printf("%d\n", count);
	for(i=0;i<count;i++)
		printf("%d\n", b[i]);
	return 0;
}



