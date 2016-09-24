#include<stdio.h>
int main()
{
	int i,t,n;
	char d[41][51],o[5],r[41][51];
	scanf("%d", &t);
	getchar();
	while(t--)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%s %s",d[i],o);
			gets(r[i]);
		}
		printf("Begin on%s\n",r[n-1]);
		for(i=n-1;i>0;i--)
		{
			if(strcmp(d[i],"Right")==0)
			{
				printf("Left on%s\n", r[i-1]);
			}
			else			
			{
				printf("Right on%s\n", r[i-1]);
			}
		}
		printf("\n");
	}
	return 0;
}



