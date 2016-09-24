#include<stdio.h>
#include<math.h>
int main()
{
	int ls, b, t;
	float min, max, in,ax;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &b, &ls);
		in=pow(ls,2)-pow(b,2);
		min=sqrt(in);
		ax=pow(ls,2)+pow(b,2);
		max=sqrt(ax);
		printf("%0.4f %0.4f\n", min, max);
	}
	return 0;
}
