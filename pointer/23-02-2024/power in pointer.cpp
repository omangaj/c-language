#include<stdio.h>
int main()
{
	int n,p,*ptr1,*ptr2,i,power;
	
	printf("Enter number:");
	scanf("%d",&n);
	
	printf("Enter power:");
	scanf("%d",&p);
	
	ptr1=&n;
	ptr2=&p;
	
	for(i=1;i<=*ptr2;i++)
	{
		power=power*(*ptr1);
	}
	
	printf("%d power %d is %d",*ptr1,*ptr2,power);
	
	return 0;
}
