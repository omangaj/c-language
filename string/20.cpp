#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],m;
	printf("Enter the string:\n");
	gets(a);
	int i,j,k,count=1;
	int len=strlen(a);
	
	for(i=0;i<len;i++)
	{
		count=1;
		for(j=i+1;j<len;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				for(k=j;k<len;k++)
				{
					a[k]=a[k+1];
				}
				j--;
				len--;
			}
		}
		
		printf("\n%c frequency is %d",a[i],count);
	}
	
	return 0;
}
