#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter value\n");
scanf("%d",&a);
if (a%2==0)
{
 printf("Number is Even");
}
else
{
 printf("Number is Odd");
}
getch();
}