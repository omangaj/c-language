#include<stdio.h>
#include<string.h>
int main()
{
	char f[30],s[30];
	printf("Enter first the string:\n");
	gets(f);
	printf("Enter second the string:\n");
	gets(s);
	printf("before copy first %s\n",f);
	printf("before copy second %s\n",s);
	int count=0;
	while(f[count]!='\0')
	{
		s[count]=f[count];
		count++;
	}
	s[count]='\0';
	printf("after copy first %s\n",f);
	printf("after copy second %s\n",s);
	
	return 0;	
}
