#include<stdio.h>
#include<math.h>
int a[10010];
int main()
{
	int t,n,p,q,s,i;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		s=sqrt(n);
		p=1;
		q=n;
		while(s--)
		{
			if(p<=q)
			{
				if(n%p==0)
				{
					q=n/p;
					a[i]=p;
					a[i+1]=q;
					i=i+2;
				}
				p++;
			}
			else
				break;
		}
		i=i-2;
		if((a[i]-a[i+1])<0)
			printf("%d\n", a[i+1]-a[i]);
		else
			printf("%d\n", a[i]-a[i+1]);
	}
	return 0;
}

