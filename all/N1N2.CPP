#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n1,n2;
printf("\nEnter numbers\n");
scanf("%d%d",&n1,&n2);
if (n1>n2)
{
 printf("\nn1 greater than n2");
}
else
{
 printf("\n n2 greater than n1");
}
getch();
}