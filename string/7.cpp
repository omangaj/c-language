#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter upper & lower case string:\n");
	gets(c);
	printf("before togglecase :%s\n",c);
	for(int i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
			continue;
		if(c[i]>='A'&& c[i]<='Z')
			c[i]=c[i]+32;		
		else
			c[i]=c[i]-32;
	}
	printf("after togglecase :%s",c);
	return 0;
}
