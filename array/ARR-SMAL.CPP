#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,temp,flag;
	printf("Enter values in array:\n");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
  			{
   				temp=a[i];
   				a[i]=a[j];
   				a[j]=temp;
  			}
 		}
	}
	printf("Sorted array:\n");
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
	printf("\nsmallest missing elements in array:\n");
	for(i=0;i<5;i++)
	{
		flag=0;
		for(j=a[i]+1;j<a[i+1];j++)
		{
    		printf("%d\t",j);
    		flag=1;
			break;
		}
 		if(flag==1)
 		break;
	}
return 0;
}
