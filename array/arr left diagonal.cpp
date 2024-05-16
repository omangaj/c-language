#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,s1,s2,sum=0;
	printf("Enter value for a[i]:");
	scanf("%d",&s1);
	printf("Enter value for a[j]:");
	scanf("%d",&s2);
	printf("Enter values in array:\n");
	for(i=0;i<s1;i++)
 	{
  	for(j=0;j<s2;j++)
  		{
   		scanf("%d",&a[i][j]);
  		}
 	}

	printf("%d * %d array is:\n",s1,s2);
	for(i=0;i<s1;i++)
 	{
  		for(j=0;j<s2;j++)
  		{
   			printf("%d\t",a[i][j]);
  		}
  		printf("\n");
 	}
	printf("\nleft diagonal elements is:\n");
	sum=0;
	for(i=0;i<s1;i++)
 	{
  		for(j=0;j<s2;j++)
  		{
   			if(j==2-i)
   			{
   			sum=sum+a[i][j];
   			printf("%d\t",a[i][j]);
   			}
  		}
  		printf("\n");
 }
  printf("sum of left diagonal elements is:%d",sum);

return 0;

}
