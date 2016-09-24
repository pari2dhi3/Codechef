#include<stdio.h>
#include<string.h>
int main()
{
	char w[100];
	int n,t,i,count;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",w);
		count=0;
		for(i=0;w[i]!='\0';i++)
		{
			if(w[i]==65||w[i]==68||w[i]==79||w[i]==80||w[i]==81||w[i]==82)
				count=count+1;
			else if(w[i]==66)
				count=count+2;
		}
		printf("%d\n",count);
	}
	return 0;
}

		

