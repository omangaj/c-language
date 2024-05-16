#include<stdio.h>
int main()
{
	int i,a[10],s,j,temp,diff,k,m,count=0;
	
	printf("Enter size of array:\n");
	scanf("%d",&s);
	
	printf("\nEnter values in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
		
	printf("\nvalues in array:\n");
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
		
	printf("\nSorted array is:\n");
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	
	printf("\nEnter diff of two elements:");
		scanf("%d",&diff);
	
	printf("\nDistinct pairs of diff %d is:\n",diff);
	count=0;
	for(i=0;i<s;i++)
	{
		k=a[i];
		for(j=i+1;j<0;j++)
		{
			m=a[j];
			if(a[j]-a[i]==diff)
			{
				printf("%d %d",k,m);
				count++;
			}
		}
	}
	printf("\nnumber of distict pair of diff %d is %d",diff,count);
	 
	 return 0;
}
