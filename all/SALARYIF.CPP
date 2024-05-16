#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
long int bs,hra,da,total;
printf("\nEnter basic salary of employee\n");
scanf("%ld",&bs);
if (0<bs && bs<=10000)
{
 printf("Gross salary=%ld",bs+(bs*20/100)+(bs*80/100));
}
else if (bs>10000 && bs<=20000)
{
 printf("Gross salary=%ld",bs+(bs*25/100)+(bs*90/100));
}
else
{
 printf("Gross salary=%ld",bs+(bs*30/100)+(bs*95/100));
}
getch();
}