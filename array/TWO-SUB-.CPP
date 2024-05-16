#include<stdio.h>
#include<conio.h>
int main()
{

	int a[10][10],b[10][10],i,j,s1,s2,c[10][10],sub=0;
	printf("Enter value for a[i]:");
	scanf("%d",&s1);
	printf("Enter value for a[j]:");
	scanf("%d",&s2);
	printf("Enter values in array a:\n");
	for(i=0;i<s1;i++)
 	{
  		for(j=0;j<s2;j++)
  		{
   			scanf("%d",&a[i][j]);
  		}
	}

	printf("Enter values in array b:\n");
	for(i=0;i<s1;i++)
 	{
  		for(j=0;j<s2;j++)
  		{
   			scanf("%d",&b[i][j]);
  		}
 	}
	for(i=0;i<s1;i++)
	{
		for(j=0;j<s2;j++)
	  	{
	   		sub=a[i][j]-b[i][j];
	   		c[i][j]=sub;
	  	}
	  	sub=0;
	 }
	printf(" values in c array is:\n");
	for(i=0;i<s1;i++)
 	{
  		for(j=0;j<s2;j++)
  		{
   			printf("%d\t",c[i][j]);
  		}
  		printf("\n");
 	}

return 0;
}
