#include<stdio.h>
int main()
{
	long long int t, n, a[100000], i, packet, left;
	long long int k;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld", &n, &k);
		for(i=0;i<n;i++)
			a[i]=0;
		for(i=0;i<n;i++)
			scanf("%lld", &a[i]);
		packet=0;
		for(i=0;i<n;i++)
		{
			if((a[i]>k)&&(a[i]%k!=0))
			{
				packet=packet+a[i]/k+1;
				left=k-((a[i]%k)+1);
				if(a[i+1]!=0)
				{
					while(a[i+1]<=left)
					{
						if(a[i+1]<left)
							left=left-(a[i+1]+1);
						else if(a[i+1]==left)
							left=0;
						i++;
					}
				a[i+1]=a[i+1]-left;
				}
			}
			else if(a[i]<k)
			{
				packet=packet+1;
				left=(k-(a[i]+1));
				if(a[i+1]!=0)
				{
					while(a[i+1]<=left)
					{
						if(a[i+1]<left)
							left=left-(a[i+1]+1);
						else if(a[i+1]==left)
							left=0;
						i++;
					}
				a[i+1]=a[i+1]-left;
				}
			}
			else if(a[i]%k==0)
			{
				packet=packet+a[i]/k;
				left=0;
			}
		}
		printf("%lld\n", packet);
	}
	return 0;
}




