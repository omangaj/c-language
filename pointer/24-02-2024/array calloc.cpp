#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,s,*p;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	 
	p=(int*)calloc(s,sizeof(int));
	
	printf("Enter array value:\n");
	for(i=0;i<s;i++)
		scanf("%d",&p[i]);
		
	printf("\narray value:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);
	
return 0;
}

