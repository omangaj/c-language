#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter value\n");
scanf("%d",&a);
if (a%5==0 && a%11==0)
{
 printf("Number is divisible by 5 & 11");
}
else
{
 printf("Number is not divisible by 5 & 11");
}
getch();
}