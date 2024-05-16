#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter the string:\n");
	gets(c);
	int i,al=0,d=0,s=0;

	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='A' && c[i]<='Z' || c[i]>='a' && c[i]<='z')
			al++;
		else if(c[i]>='0' && c[i]<='9')
			d++;
		else
			s++;	
	}
	
	printf("Alphabet=%d  Digit=%d  symbols=%d",al,d,s);
	return 0;
}
