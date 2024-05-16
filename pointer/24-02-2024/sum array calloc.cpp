#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,s,*p,sum=0;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	  
	p=(int*)calloc(s,sizeof(int));
	
	printf("Enter array value:\n");
	for(i=0;i<s;i++)
		scanf("%d",&p[i]);
		
	printf("\narray value:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);
	
	printf("\n\nThe all elements sum in array is:");
	sum=0;
	for(i=0;i<s;i++)
		sum=sum+p[i];
	
	printf("%d",sum);
return 0;
}

