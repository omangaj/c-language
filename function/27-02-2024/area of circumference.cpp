#include<stdio.h>
void circumference();
int main()
{
	circumference();

	return 0;
}

void circumference()
{
	float r,area;
	printf("Enter radus of circle:\n");
	scanf("%f",&r);
	printf("radius is :%f",r);
	area=3.14*r*r;
	printf("\nArea of triangle is :%f",area);
}
