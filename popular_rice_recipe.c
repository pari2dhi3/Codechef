#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,count,l,k,i,flag,j;
	char name[101][21], vote[21], s, p[101], q;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &n);
		scanf("%s",name[0]);
		scanf("%c %c", &s, &p[0]);
		count=0;
		k=1;
		for(i=1;i<n;i++)
		{
			scanf("%s",vote);
			scanf("%c %c", &s, &q);
			flag=0;
			for(j=0;j<k;j++)
			{
				if(strcmp(name[j], vote)==0)
				{
					strcpy(name[j], vote);
					p[j]=q;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				strcpy(name[k], vote);
				p[k]=q;
				k++;
			}
		}
		for(i=0;i<k;i++)
		{
			if(p[i]=='+')
				count++;
			else if(p[i]=='-')
				count--;
		}
		printf("%d\n", count);
	}
	return 0;
}





