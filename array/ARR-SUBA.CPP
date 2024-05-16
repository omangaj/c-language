#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],i,j,s,s1,s2,k;
	printf("Enter size of array:");
	scanf("%d",&s);	
	printf("Enter values in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	printf("Values in array:\n");
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);

	printf("\nEnter initial index of given array:");
	scanf("%d",&s1);
	printf("Enter final index of given array:");
	scanf("%d",&s2);
	k=s2-s1;
	for(i=s1,j=0;i<s2+1 && j<k;i++,j++)
  		b[j]=a[i];

	printf("new array:\n");
	for(i=0;i<k;i++)
		printf("%d\t",b[i]);

return 0;
}
