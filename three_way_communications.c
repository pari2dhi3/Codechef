#include<stdio.h>
#include<math.h>
int main()
{
	int t,r,x1,x2,x3,y1,y2,y3,z1,z2,z3,count;
	float d1,d2,d3;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &r);
		scanf("%d %d", &x1,&y1);
		scanf("%d %d", &x2,&y2);
		scanf("%d %d", &x3,&y3);
		d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
		d2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
		d3=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
		count=0;
		if(r>=d1)
			count++;
		if(r>=d2)
			count++;
		if(r>=d3)
			count++;
		if(count>=2)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}

