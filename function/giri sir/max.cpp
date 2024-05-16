#include<stdio.h>
int largest(int *ptr,int n);
int main()
{
	int a[]={7,1,5,4,2,11,33,55};
	int n=sizeof(a)/sizeof(a[0]);
	printf("max value is %d",largest(a,n));
	return 0;
}

int largest(int *ptr,int n)
{
	int max=ptr[0];
	for (int i=1;i<n;i++)
	{
			if (ptr[i]>max)
			max=ptr[i];
	}
	return max;
}
