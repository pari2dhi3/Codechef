#include<stdio.h>
int main()
{
	long long int t,l,d,s,c;
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld %lld %lld %lld", &l, &d, &s, &c);
		d--;
		while(d--)
		{
			s=s+(s*c);
			if(s>l)
				break;
		}
		if(s>=l)
			printf("ALIVE AND KICKING\n");
		else
			printf("DEAD AND ROTTING\n");
	}
	return 0;
}

