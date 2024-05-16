#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,fact;
	printf("Enter number:");
	scanf("%d",&n);
	printf("perfect number is:");
	for(i=1;i<n;i++)
	{
 		fact=0;
 		for(j=1;j<i;j++)
 		{
  			if(i%j==0)
  			{
   				fact=fact+j;
  			}
 		}
 		if(fact==i)
 		{
  			printf("%d\t",i);
  			fact=0;
 		}
	}
return 0;
}
