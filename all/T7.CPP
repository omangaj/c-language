#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j;
for(i=1;i<=5;i++)
{
 for(j=1;j<=5;j++)
 {
 if(i>=j)
 {
 if(j%2==1)
 printf("1 ");
 else
 printf("0  ");
 }
 }
 printf("\n");
}
getch();
}