#include<stdio.h>
int gcd(long a,long b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{	
	int t,n,i,w,a[1000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		w=gcd(a[0],a[1]);
		for(i=2;i<n;i++)
			w=gcd(w,a[i]);
		printf("%d\n", w);
	}
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		/*		qsort(a, n, sizeof(int), cmpfunc);
		while(a[0]!=a[n-1])
		{
			for(i=0;i<(n-1);i++)
			{
				if(a[i]<a[i+1])
				{
					a[i+1]=a[i+1]-a[i];
					i--;
				}
				else if(a[i]>a[i+1])
				{
					a[i]=a[i]-a[i+1];
					i--;
				}
			}
			qsort(a,n,sizeof(int),cmpfunc);
		}
		printf("%d\n", a[0]);
	}
	return 0;
}*/







