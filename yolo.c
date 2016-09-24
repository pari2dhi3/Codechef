#include<stdio.h>
int cmpfunc (const void * a, const void * b)
{
	return ( *(int*)b - *(int*)a );
}

int main()
{
	int t,a[3],p,q,r,i,flag;
	while(1)
	{
		flag=0;
		for(i=0;i<3;i++)
		{
			scanf("%d", &a[i]);
			if(a[i]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
		scanf("%d %d", &p, &q);
		qsort(a, 3, sizeof(int), cmpfunc);
		if((p>a[0])&&(q>a[0]))
			r=1;
		else if(((p>a[1])&&(q>a[1]))||((q>a[1])&&(p>a[1])))
		{
			if((p==a[1]+1)||(q==a[1]+1))
			{
				r=a[1]+2;
				if((p==a[1]+2)||(q==a[1]+2))
					r=a[1]+3;
			}
			else
				r=a[1]+1;
		}
		else if(((p>a[0])&&(q>a[1]))||((q>a[0])&&(p>a[1])))
		{
			if((p==a[1]+1)||(q==a[1]+1))
				r=a[1]+2;
			else
				r=a[1]+1;
		}
		else if(((p>a[0])&&(q>a[2]))||((q>a[0])&&(p>a[2])))
		{
			if((p==a[0]+1)||(q==a[0]+1))
				r=a[0]+2;
			else
				r=a[0]+1;
		}
		else if(((p>a[0])&&(q<a[2]))||((q>a[0])&&(p<a[2])))
		{
			if((p==a[0]+1)||(q==a[0]+1))
				r=a[0]+2;
			else
				r=a[0]+1;
		}
		/*	else if(((p>a[1])&&(q>a[1]))||((q>a[1])&&(p>a[1])))
			{
			if((p==a[0]+1)||(q==a[0]+1))
			r=a[0]+2;
			else
			r=a[0]+1;
			}
		 */
		else
			r=-1;
		printf("%d\n", r);
	}
	return 0;
}




