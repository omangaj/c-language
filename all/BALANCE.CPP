#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x,y,t;
printf("\nEnter the amount the widrwal\n");
scanf("%d",&x);
printf("\nEnter the balance\n");
scanf("%d",&y);
t=y-x;
if(x<y)
{
 printf("incorrect widrwal amount(not mulitiple 5)\n");
 printf("balance is %d",y);
}
else if(x<y && 0<x<=2000 && 0<y<=2000)
{
 printf("balance after the widrwal %f",t-0.5);
}
else
{
 printf("Insufficient balance");
}
getch();
}