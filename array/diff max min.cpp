#include<stdio.h>

int main()
{
	int a[10],i,j,s,min,max,diff;
	printf("Enters size of array:");
	scanf("%d",&s);
	printf("\nEnter values in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	
	min=a[0];
	max=a[0];
	for(i=0;i<s;i++)
	{
		for(j=0;j<s;j++)
		{
			if(a[i]>max)
			 max=a[i];
			 
			if(a[i]<min)
			 min=a[i];
		}
	}
printf("\nmax value is %d",max);
printf("\nmin value is %d",min);

diff=max-min;
printf("\ndifference between %d and %d is %d",max,min,diff);
 return 0;
}
