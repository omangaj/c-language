#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],s,i,j,diff,temp,min,max,max_diff;
	printf("Enter size of array:");
		scanf("%d",&s);
	printf("\nEnter values in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	printf("\nSorted array:\n");
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	
	min=a[0];
	max=a[0];
	for(i=0;i<s;i++)
	{
		if(min>a[i])
		min=a[i];
		
		if(max<a[i])
		max=a[i];
	}
	printf("\nmax value is %d",max);
	printf("\nmin value is %d",min);
	max_diff=max-min;
	printf("\nDifference between max and min value in this array:%d",max_diff);

	return 0;
}
