#include<stdio.h>
#include<math.h>
int main()
{
	float b,s,v,p,q,w,e,r,y;
	int t;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%f %f", &p, &s);
		q=((p*p)-(24*s));
		w=sqrt(q);
		b=(p-w)/12;
		v=(b*(s/2-b*b)/2);
		printf("%.2f\n", v);
	}
	return 0;
}

