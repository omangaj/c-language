#include<stdio.h>
void circlearea();
int main()
{
	circlearea();

	return 0;
}

void circlearea()
{
	float r,area;
	printf("Enter radius of circle:");
	scanf("%f",&r);
	printf("\nradius is:%f",r);
	area=3.14*r*r;
	printf("\nArea of circle is :%f",area);
}
