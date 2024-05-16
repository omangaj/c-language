#include<stdio.h>
void sub();
int main()
{
	sub();

	return 0;
}

void sub()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a-b;
	printf("\na and b subtraction is:\nc=%d",c);
}
