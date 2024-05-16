#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j>=6-i)
			{
				if(i==1||i==3||i==5)
				{
					printf("#");
				}
				else if(i==2||i==4)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		
		}
		printf("\n");
	}
return 0;
}
