#include<stdio.h>
void mod();
int main()
{
	mod();

	return 0;
}

void mod()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a%b;
	printf("\na and b modul/remaider is:\nc=%d",c);
}
