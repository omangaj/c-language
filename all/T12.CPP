#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,m=64;
for(i=1;i<=5;i++)
{
 for(j=0;j<5;j++)
 {
 if((i+j)%2==0)
 printf("%c ",m);
 else
 printf("* ");
 m++;
 }
 printf("\n");
}
getch();
}