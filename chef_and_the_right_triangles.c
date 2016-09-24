#include<stdio.h>
#include<math.h>
int main()
{
	int n,count;
	float x1,x2,x3,y1,y2,y3,d1,d2,d3;
	scanf("%d",&n);
	count=0;
	while(n--)
	{
		scanf("%f %f %f %f %f %f", &x1,&y1,&x2,&y2,&x3,&y3);
		d1=(pow((y2-y1),2)+pow((x2-x1),2));
		d2=(pow((y3-y2),2)+pow((x3-x2),2));
		d3=(pow((y1-y3),2)+pow((x1-x3),2));
		if(((d1)==((d2)+(d3)))||((d2)==((d3)+(d1)))||((d3)==((d1)+(d2))))
			count++;
	}
	printf("%d\n", count);
	return 0;
}


