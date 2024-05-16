#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("D:\\file\\1.txt","r");
	printf("\n in address of file %p",fptr);
	if(fptr==NULL)
	{
		printf("\nerror in file open");
	}
	else
	{
		printf("\nfile is open successfully...");
	}
	return 0;
}
