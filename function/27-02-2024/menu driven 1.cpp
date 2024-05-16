#include<stdio.h>
void add();
void sub();
void multi();
void div();
void mod();

int main()
{ 
	int choice;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modul/Remainder");
	printf("\nEnter your choice:");
	scanf("%d",&choice);
	printf("\n");
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			sub();
			break;
		case 3:
			multi();
			break;
		case 4:
			div();
			break;
		case 5:
			mod();
			break;
		default:
			printf("wrong choice");
			break;
	}
	

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

void sub()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a-b;
	printf("\na and b subtraction is:\nc=%d",c);
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

void div()
{
	int a,b,c;
	printf("Enter values to a & b\n");
	scanf("%d%d",&a,&b);
	printf("a=%d  b=%d",a,b);
	c=a/b;
	printf("\na and b division is:\nc=%d",c);
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
