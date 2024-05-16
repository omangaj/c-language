#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],i,j,smallest,sum,l=0,r=0;
	printf("Enter the array values");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	smallest=a[0]+a[1];
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			sum=a[i]+a[j];
			if(abs(smallest)>abs(sum))
			{
				smallest=sum;
				l=i;
				r=j;
			}
		}
		
	}
	for(i=0;i<10;i++)
		{
			printf("[%d,%d]",a[l],a[r]);
		}
}
