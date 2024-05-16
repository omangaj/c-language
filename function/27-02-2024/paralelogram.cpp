#include<stdio.h>
void parallelogram();
int main()
{
	parallelogram();

	return 0;
}

void parallelogram()
{
	float b,h,area;
	printf("Enter base & height of parallelogram:\n");
	scanf("%f%f",&b,&h);
	printf("base=%f  height=%h",b,h);
	area=b*h;
	printf("\nArea of parallelogram is :%f",area);
}
