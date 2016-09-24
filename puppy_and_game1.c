#include<stdio.h>
int main()
{
	int t,a,b;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		if(((a==1)&&(b==1))||((a==3)&&(b==3)))
			printf("Vanka\n");
		else
			printf("Tuzik\n");
	}
	return 0;
}

