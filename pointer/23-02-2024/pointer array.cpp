#include<stdio.h>
int main()
{
	int *ptr,s,a[10],i;
	printf("Enter size of array:");
	scanf("%d",&s);
	
	printf("\nEnter elements in array:\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}

	ptr=a;
	
	printf("\nelements in poiter array:\n");
	for(i=0;i<s;i++)
	{
		printf("%d\t",*ptr);
		*ptr++;
	}
	
	return 0;
	
}
