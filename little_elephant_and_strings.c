#include<stdio.h>
#include<string.h>
int main()
{
	int n,k,i,lenb,l,m,count,flag,j,lena,repeat;
	char a[51][51], b[51][51];
	scanf("%d %d", &k, &n);
	for(i=0;i<k;i++)
		scanf("%s", a[i]);
	lena=0;
	for(i=0;i<n;i++)
	{
		scanf("%s", b[i]);
		lenb=strlen(b[i]);
		if(lenb>=47)
		{
			printf("Good\n");
		}
		else
		{
			for(j=0;j<k;j++)
			{
				l=0;
				m=0;
				count=0;
				flag=0;
				repeat=0;
				lena=strlen(a[j]);
				while((l<lena)&&(m<lenb))
				{
					if(a[j][l]==b[i][m])
					{
						l++;
						m++;
						count++;
						if(count==lena)
						{
							flag=1;
							printf("Good\n");
							break;
						}
					}
					else
					{
						repeat++;
						l=0;
						m=repeat;
						count=0;
					}
				}
				//		if(count==lena)
				//		{
				//			flag=1;
				//			printf("Good\n");
				//			break;
				//		}
				if(flag==1)
					break;
			}
			if(flag==0)
				printf("Bad\n");
		}
	}
	return 0;
}




