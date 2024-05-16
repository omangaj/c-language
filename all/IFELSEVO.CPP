#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int x,y;
printf("\nEnter initial value\n");
scanf("%d",&x);
printf("\nEnter final value\n");
scanf("%d",&y);
if(x<y)
{
 printf("chef can press volume up button %d times increase the volume %d to %d",(y-x),x,y);
}
else
{
 printf("chef can press volume up button %d times decrease the volume %d to %d",(y-x),x,y);
}
getch();
}