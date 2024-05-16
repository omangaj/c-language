#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],m;
	printf("Enter the string:\n");
	gets(a);
	int i,j,k,min=0,count=0,len;
	len=strlen(a);
	min=len;
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				a[j]=' ';
			}
			
		}
		if(a[i]!=' ')
		{
			if(min>count)
			{
				min=count;
				k=i;
			}
		}
	}
	printf("minimum occurence of character %c count is %d",a[k],min);
	return 0;
}
