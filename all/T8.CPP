#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,m;
for(i=1;i<=5;i++)
{
 for(j=1;j<=5;j++)
 {
 m=64+j;
 if(i>=j)
 printf("%c ",m);
 }
 m++;
 printf("\n");
}
getch();
}