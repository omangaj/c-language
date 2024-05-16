#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],m;
	printf("Enter the string:\n");
	gets(a);
	int i,j,max=0,count=0;
	for(i=0;a[i];i++)
	{
		count=1;
		for(j=i+1;a[j];j++)
		{
			if(a[i]==' ')
			{
				continue;
			}
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(max<count)
		{
			max=count;
			m=a[i];
		}
	}
	printf("maximum occurence of character %c count is %d",m,max);
	return 0;
}
