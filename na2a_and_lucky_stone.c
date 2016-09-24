#include<stdio.h>
#include<math.h>
int main()
{
	long long int i,n,z,count5,count2,count4;
	long long int p,a[100000];
	scanf("%lld", &n);
	for(i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
		p=a[i];
		count2=0;
		count5=0;
		count4=0;
		if(p%5==0)
		{
			while(p%5==0)
			{
				p=p/5;
				count5++;
			}
			p=a[i];
			while(p%2==0)
			{
				p=p/2;
				count2++;
			}
			if((count2==0)&&(count5>0))
			{
				if(count5%2==0)
				{
					count4=count5/2;
					z=pow(4,count4);
					a[i]=a[i]*z;
				}
				else
				{
					count4=count5/2+1;
					z=pow(4,count4);
					a[i]=a[i]*z;
				}
			}
			if((count2>0)&&(count5>0))
			{
				if(count5>=count2)
					count5=count5-count2;
				else
					count5=0;
				if(count5%2==0)
				{
					count4=count5/2;
					z=pow(4,count4);
					a[i]=a[i]*z;
				}
				else
				{
					count4=count5/2+1;
					z=pow(4,count4);
					a[i]=a[i]*z;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%lld\n", a[i]);
	return 0;
}
