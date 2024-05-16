#include<stdio.h>
int main()
{
	int *ptr1,*ptr2,s,a[10],i,rev;
	printf("Enter size of array:");
	scanf("%d",&s);
	printf("\nEnter elements in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	
	ptr1=a;
	
	printf("\nelements in poiter array:\n");
	for(i=0;i<s;i++)
	{
		printf("%d\t",*ptr1);
		ptr1++;
	}
	ptr1=a;
	ptr2=a+s-1;
	while(ptr1<ptr2)
	{
		rev=*ptr1;
		*ptr1=*ptr2;
		*ptr2=rev;
		ptr1++;
		ptr2--;
	}
	
	printf("\nreverse elements in poiter array:\n");
	ptr1=a;
	for(i=0;i<s;i++)
	{
		printf("%d\t",*ptr1);
		ptr1++;
	}	
	return 0;
}
