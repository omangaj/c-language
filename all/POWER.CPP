#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int index,base,i,p=1;
printf("enter the base:");
scanf("%d",&base);
printf("enter the index:");
scanf("%d",&index);
i=1;
while(i<=index)
{
 p=p*base;
 i++;
}
printf("power is %d",p);
getch();
}