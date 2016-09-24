#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char front[7]="0000000";
		char back[7]="0000000";
		char left[7]="0000000";
		char right[7]="0000000";
		char top[7]="0000000";
		char bottom[7]="0000000";
		scanf("%s %s %s %s %s %s", front, back, left, right, top, bottom);
		if(((strcmp (front,left) == 0) || (strcmp (front,right) == 0))&&((strcmp (front,top) == 0) || (strcmp (front,bottom) == 0)))
				printf("YES\n");
		else if(((strcmp (back,left)== 0) || (strcmp (back,right)== 0))&&((strcmp (back,top)== 0) || (strcmp (back,bottom)== 0)))
				printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}




