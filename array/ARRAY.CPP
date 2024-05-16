#include<stdio.h>
#include<conio.h>
int main(){
	int a[10],i,s;
	printf("Enter size of array less 10:\n");
	scanf("%d",&s);
	printf("Enter values in array:\n");
	for(i=0;i<s;i++)
	{
 		scanf("%d",&a[i]);
	}
	printf("Values in array:\n");
	for(i=0;i<s;i++)
	{
 		printf("%d\t",a[i]);
	}

return 0;
}
