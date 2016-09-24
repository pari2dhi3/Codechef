#include<stdio.h>
int main()
{
	int i,w,t,n,c,a[1000];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &c);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		w=0;
		for(i=0;i<n;i++)
			w=a[i]+w;
		if(c>=w)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

			
		

