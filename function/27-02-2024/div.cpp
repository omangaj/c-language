#include<stdio.h>
void div();
int main()
{
	div();

	return 0;
}

void div()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a/b;
	printf("\na and b division is:\nc=%d",c);
}
