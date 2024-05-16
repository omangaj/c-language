#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter the lowercase string:\n");
	gets(c);
	printf("lower to upper\n");
	printf("before convert %s\n",c);
	strupr(c);
	printf("after convert %s\n",c);
	return 0;
}
