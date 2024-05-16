#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,s,i,index,val;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	
	p=(int*)malloc(s*sizeof(int));
	
	printf("\nEnter value in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&p[i]);
	
	printf("\nvalue in array:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);
	
	
	printf("\nEnter index:");
	scanf("%d",&index);
	printf("\nEnter value to enter index:");
	scanf("%d",&val);
	
	for(i=s;i>index;i--)
		p[i]=p[i-1];

	p[i]=val;
	s++;
	
	printf("\nnew array is:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);
		
return 0;
}
