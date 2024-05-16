#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,m=65;
for(i=1;i<=5;i++)
{
 for(j=1;j<=5;j++)
 {
 if(j<=6-i)
 printf("%c ",m);
 }
 m++;
 printf("\n");
}
getch();
}