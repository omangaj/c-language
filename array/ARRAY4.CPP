#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,max,min;
	printf("Enter five values in array:\n");
	for(i=0;i<5;i++)
	{
 		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<5;i++)
	{
 		if(a[i]>max)
  		max=a[i];
		if(a[i]<min)
  		min=a[i];
	}
	printf("miximum value in array:%d",max);
	printf("\nminimum value in array:%d",min);

return 0;
}
