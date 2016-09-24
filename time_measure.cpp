#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,angle,min,hour;
	float hr;
	cin >> t;
	while(t--)
	{
		cin >> angle;
		min=0;
		hr=0;
		while((abs(hr-min)!=angle)&&(hr<=180))
		{
			hr=hr+0.5;
			min=(min+6)%360;
		}
		min=min/6;
		hr=hr/30;
		if(min<10)
		{
			printf("0%0.0f:0%d\n", hr, min);
			min=(60-min)%60;
			hr=12-hr;
			hour=hr;
			if((hr<10)&&(min<10))
				printf("0%d:0%d\n", hour, min);
			else if((hr<10)&&(min>=10))
				printf("0%d:%d\n", hour, min);
			else if((hr>=10)&&(min<10))
				printf("%d:0%d\n", hour, min);
			else if((hr>=10)&&(min>=10))
				printf("%d:%d\n", hour, min);
		}
		else
		{
			printf("0%0.0f:%d\n", hr, min);
			min=(60-min)%60;
			hr=12-hr;
			hour=hr;
			if((hr<10)&&(min<10))
				printf("0%d:0%d\n", hour, min);
			else if((hr<10)&&(min>=10))
				printf("0%d:%d\n", hour, min);
			else if((hr>=10)&&(min<10))
				printf("%d:0%d\n", hour, min);
			else if((hr>=10)&&(min>=10))
				printf("%d:%d\n", hour, min);
		}
	}
	return 0;
}





