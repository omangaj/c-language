#include<stdio.h>
void trianglearea();
int main()
{
	trianglearea();

	return 0;
}

void trianglearea()
{
	float h,b,area;
	printf("Enter height & base of triangle:\n");
	scanf("%f%f",&h,&b);
	printf("h=%f  b=%f",h,b);
	area=(h*b)/2;
	printf("\nArea of triangle is :%f",area);
}
