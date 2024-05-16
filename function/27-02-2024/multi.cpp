#include<stdio.h>
void multi();
int main()
{
	multi();

	return 0;
}

void multi()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a*b;
	printf("\na and b multiplication is:\nc=%d",c);
}
