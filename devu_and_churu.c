#include<stdio.h>
int main()
{
	int n,m,a[1000000],k,i,j;
	char x,c;
	scanf("%d %d", &n, &m);
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	while(m--)
	{
		scanf("%c %d %c", &c, &k, &x);


