#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,s,*p,min,max;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	 
	p=(int*)calloc(s,sizeof(int));
	
	printf("Enter array value:\n");
	for(i=0;i<s;i++)
		scanf("%d",&p[i]);
	
	printf("\narray value:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);
	
	min=p[0];
	max=p[0];
	
	for(i=0;i<s;i++)
	{
		if(min>p[i])
		min=p[i];
		
		if(max<p[i])
		max=p[i];
	}
	printf("\nmin=%d\n",min);
	printf("max=%d",max);
	
return 0;
}

