//implementing quicksort
#include<stdio.h>
int a[100][2];
void quicksort(int first,int last)
{
	int high,low,temp,x;
	if(first<last)
	{
		high=last;
		low=first;
		x=first;
		while(high>low)
		{
			while((a[low][0]<=a[x][0])&&(high>low))
				low++;
			while(a[high][0]>a[x][0])
				high--;
			if(low<high)
			{
				temp=a[low][0];
				a[low][0]=a[high][0];
				a[high][0]=temp;
				temp=a[low][1];
				a[low][1]=a[high][1];
				a[high][1]=temp;

			}
		}
		temp=a[x][1];
		a[x][1]=a[high][1];
		a[high][1]=temp;
		temp=a[x][0];
		a[x][0]=a[high][0];
		a[high][0]=temp;
		quicksort(first,high-1);
		quicksort(high+1,last);
	}
}
int main()
{
	int i,n;
	printf("ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER\n");
	scanf("%d",&n);
	printf("ENTER %d ELEMENTS\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i][0]);
	for(i=0;i<n;i++)
		scanf("%d",&a[i][1]);
	quicksort(0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",a[i][0]);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i][1]);
	printf("\n");
}
