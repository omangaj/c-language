#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int  a,b;
printf("\nEnter initial number:");
scanf("%d",&a);
printf("\nEnter final number:");
scanf("%d",&b);
while(a<=b)
{
if(a%2==1)
{
printf("\n%d",a);
}
a++;
}
getch();
}