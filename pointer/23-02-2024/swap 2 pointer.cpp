#include<stdio.h>
int main()
{
	int n1,n2,sum=0;
	int *ptr1,*ptr2,*ptr3;
	printf("Enter values in n1:");
		scanf("%d",&n1);
	printf("Enter values in n2:");
		scanf("%d",&n2);
	printf("\nn1=%d   n2=%d",n1,n2);
	ptr1=&n1;
	ptr2=&n2;
	printf("\nptr1=%u  ptr2=%u",*ptr1,*ptr2);
	ptr3=ptr1;
	ptr1=ptr2;
	ptr2=ptr3;
	printf("\nptr1=%u  ptr2=%u",*ptr1,*ptr2);
	
	return 0;
}
