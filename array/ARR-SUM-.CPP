#include<stdio.h>
#include<conio.h>
int main()
{

	int a[10],c[10],j,size,i,flag=0,k,m;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter five values in array:\n");
	for(i=0;i<size;i++)
 		scanf("%d",&a[i]);
	printf("Values in array:\n");
	for(i=0;i<size;i++)
 			printf("%d\t",a[i]);
	for(i=0;i<size;i++)
	{
 		k=a[i];
 		flag=0;
 		for(j=i+1;j<size;j++)
 		{
  			m=a[j];
  			if(a[i]+a[j]<=0)
  			{
   				flag=1;
  			}
 		}
	}
	printf("\nelements are:\n");
	if(flag==1)
	{
 		printf("first element is %d",k);
 		printf("\nsecond element is %d",m);
	}
return 0;
}
