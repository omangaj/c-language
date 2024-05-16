#include<stdio.h>
void circlearea();
void rectanglearea();
void trianglearea();
void circumference();
void parallelogram();
int main()
{
	int choice;
	printf("1.Area of circle\n2.Area of rectangle\n3.Area of triangle\n4.Area of circumference\n5.Area of parallelogram");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1:
			circlearea();
			break;
		case 2:
			rectanglearea();
			break;
		case 3:
			trianglearea();
			break;
		case 4:
			circumference();
			break;
		case 5:
			parallelogram();
			break;
		default:
			printf("wrong choice");
			break;
	}
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

void rectanglearea()
{
	int l,b,area;
	printf("Enter sides of rectangle:\n");
	scanf("%d%d",&l,&b);
	printf("l=%d  b=%d",l,b);
	area=l*b;
	printf("\nArea of rectangle is :%d",area);
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

void circumference()
{
	float r,area;
	printf("Enter radus of circle:\n");
	scanf("%f",&r);
	printf("radius is :%f",r);
	area=3.14*r*r;
	printf("\nArea of circumference is :%f",area);
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
