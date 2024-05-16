#include<stdio.h>
void rectanglearea();
int main()
{
	rectanglearea();

	return 0;
}

void rectanglearea()
{
	int l,b,area;
	printf("Enter sides of rectangle:");
	scanf("%d%d",&l,&b);
	printf("l=%d  b=%d",l,b);
	area=l*b;
	printf("\nArea of rectangle is :%d",area);
}
