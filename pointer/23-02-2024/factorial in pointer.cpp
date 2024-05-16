#include<stdio.h>
int main()
{
	int n,*ptr,i,fact=1;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	
	ptr=&n;
	fact=1;
	for(i=1;i<=*ptr;i++)
	{
		if(i<=*ptr)
		{
			fact=fact*i;
		}
	}
	
	printf("%d factorial is %d",*ptr,fact);
	
	return 0;
}
