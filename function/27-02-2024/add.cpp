#include<stdio.h>
void add();
int main()
{
	add();

	return 0;
}

void add()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a+b;
	printf("\na and b addition is:\nc=%d",c);
}
