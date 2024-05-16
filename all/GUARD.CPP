#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x,y;
printf("\nEnter the manipulate guard\n");
scanf("%d",&x);
printf("\nEnter the guard\n");
scanf("%d",&y);
if(x>=y)
{
 printf("yes");
}
else
{
 printf("no");
}
getch();
}