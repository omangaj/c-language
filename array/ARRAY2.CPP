#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],i,sum=0;
	printf("Enter ten values in array:\n");
	for(i=0;i<10;i++)
	{
 		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
 		sum=sum+a[i];
	}
	printf("Sum of all array:%d",sum);
return 0;
}
