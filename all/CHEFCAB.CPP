#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int p,a,b;
printf("\nEnter price of traveling\n");
scanf("%d",&p);
printf("\nEnter price of first cab\n");
scanf("%d",&a);
printf("\nEnter price of second cab\n");
scanf("%d",&b);
printf("\nFirst cab=%d \nSecond cab=%d",a,b);
if(1<=a<=p && a<b)
{
 printf("\nchef take will first cab with price %d",a);
}
else if(1<=b<=p && b<a)
{
 printf("\nchef take will second cab with price %d",b);
}
else
{
 printf("\nchef will take any cab");
}
getch();
}