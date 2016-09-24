#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int a[13];
int fxn(int p, int i,int count)
{
	if(p>=2048)
	{
		return fxn(p-2048,12,count+1);
	}
	else
	{
		if(p==0)
			return count;
		if((a[i]<=p)&&(p<a[i+1]))
		{
			if(p==0)
				return count;
			p=p-a[i];
			count++;
			if(p==0)
				return count;
			else
				return fxn(p,i-1,count);
		}
		else
		{	
			if(count==0)
				return fxn(p,i+1,count);
			else
				return fxn(p,i-1,count);
		}
	}
}

int main()
{
	int t,i=1,p,m,ans;
	scanf("%d", &t);
	while(i<=12)
	{
		a[i]=pow(2,i-1);
		i++;
	}
	while(t--)
	{	
		scanf("%d", &p);
		ans=fxn(p,1,0);
		printf("%d\n",ans);
	}
	return 0;
}


