#include<stdio.h>
int main()
{
	int test,t,n,x,l,f,p;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d", &n);
		t=0;
		while(n--)
		{
			scanf("%d %d %d", &x, &l, &f);
			if(x>=t)
			{
				t=t+(x-t);
				t=t+l;
			}
			else if(x<t)
			{
				if(f!=0)
				{
					p=((t-x)%f);
					if(p!=0)
						p=f-p;
					t=t+p;
				}
				t=t+l;
			}
		}
		printf("%d\n", t);
	}
	return 0;
}





