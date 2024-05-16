#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,j,s,*p,temp;
	
	printf("Enter size of array:");
	scanf("%d",&s);
	 
	p=(int*)malloc(s*sizeof(int));
	
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
return 0;
}

