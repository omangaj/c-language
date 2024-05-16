#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int  a,b,i=0;
printf("\nEnter initial number:");
scanf("%d",&a);
printf("\nEnter final number:");
scanf("%d",&b);
while(a<=b)
{
if(a%2==0)
{
printf("\n%d",a);
i=i+a;
}
a++;
}
printf("\nTotal sum of even number %d",i);
getch();
}