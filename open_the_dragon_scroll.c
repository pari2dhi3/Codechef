#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,a,b,w,k,p,i,count1,count2;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d %d", &n, &a, &b);
		i=0;
		count1=0;
		while((a!=1)&&(a!=0))
		{
			if(a%2==1)
				count1++;
			a=a/2;
		}
		if(a==1)
			count1++;
		i=0;
		count2=0;
		while((b!=1)&&(b!=0))
		{
			if(b%2==1)
				count2++;
			b=b/2;
		}
		if(b==1)
			count2++;
		w=0;
		if(count1>(n-count2))
			w=n-count2;
		else if(count1<(n-count2))
			w=count1;
		else
			w=n;
		if(count2>(n-count1))
			w=w+(n-count1);
		else if(count2<(n-count1))
			w=w+count2;
		p=n-w;
		k=0;
		for(i=p;i<n;i++)
			k=k+pow(2,i);
		printf("%d\n",k); 
	}
	return 0;
}

			

