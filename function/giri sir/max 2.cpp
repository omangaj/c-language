#include<stdio.h>
int largest(int *ptr,int n);
int main()
{
	int a[]={7,1,5,4,2,11,33,55};
	int n=sizeof(a)/sizeof(a[0]);
	printf("second max value is %d",largest(a,n));
	return 0;
}

int largest(int *ptr,int n)
{
	int max1=ptr[0],max2=ptr[0];
	for (int i=0;i<n;i++)
	{
			if (ptr[i]>max1)
			{
				max2=max1;
				max1=ptr[i];
			}
	}
	for (int i=0;i<n;i++)
	{
		
		if (ptr[i]>max2 && ptr[i]<max1)
			max2=ptr[i];
	}
	
	return max2;
}
