#include<stdio.h>
int main()
{
	int a[10],b[10],s,i,j,s1,k,max;
	printf("Enter size of array:");
		scanf("%d",&s);
	printf("\nEnter values in array:\n");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<s;i++)
		printf("%d\t",a[i]);
	
	printf("\nEnter size of subarray:");
		scanf("%d",&s1);
	
	for(i=0;i<s;i++)
	{	max=b[i];
		for(k=0,j=i;k<s1 && j<s;j++,k++)
		{
			b[k]=a[j];
			printf("%d\t",b[k]);
			
			if(max<b[k])
				max=b[k];		
		}
		printf("max = %d",max);
		if(a[j]==a[s])
			break;

		printf("\n");
	}
		
	return 0;	
}
