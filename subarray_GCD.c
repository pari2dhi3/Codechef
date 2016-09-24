#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,n,a[100005],j,flag,ans;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(j=0;j<n;j++)
			scanf("%d", &a[j]);
		flag=0;
		ans=0;
		ans=gcd(a[0],a[1]);
		if(ans==1)
			flag=1;
		for(j=2;j<n;j++)
		{
			ans=gcd(a[j],ans);
			if(ans==1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("%d\n", n);
		else
			printf("-1\n");
	}
	return 0;
}

