#include<stdio.h>
int main()
{
	int n,m,a[100000];
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	i=0;
	while(m>=a[i])
	{
		m=m-a[i];
		i++;
	}



