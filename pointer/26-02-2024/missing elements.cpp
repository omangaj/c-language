#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,j,temp,s,*p;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	 
	p=(int*)calloc(s,sizeof(int));
	
	printf("Enter array value:\n");
	for(i=0;i<s;i++)
		scanf("%d",&p[i]);
	
	printf("\narray value:\n");
	for(i=0;i<s;i++)
		printf("%d\t",p[i]);

	printf("\nSort array:\n");
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}

	for(i=0;i<s;i++)
		printf("%d\t",p[i]);	
		
	
	printf("\nmissing values in array:\n");
	for(i=0;i<s;i++)
	{
		for(j=p[i]+1;j<p[i+1];j++)
		{
			printf("%d\t",j);
		}
	}
	
return 0;
}

