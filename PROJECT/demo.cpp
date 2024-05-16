#include<stdio.h>
#include<math.h>
int main()
{
	int s,a[10],i,j;
	printf("Enter size of array:");
	scanf("%d",&s);
	printf("Enter the array values\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is:\n");
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\ninversion pairs are:\n");
	for(i=0;i<s;i++)
	{
		for(j=i+1;j<s;j++)
		{
			if(a[i]>a[j])
			printf("[%d ,%d]\t",a[i],a[j]);
		}
	}
	return 0;
}

