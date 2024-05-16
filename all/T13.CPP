#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i,j,m,f;
for(i=1;i<=5;i++)
{
for(int c=i; c<=5; c++)
{printf("  ");
 }
 for(j=1;j<=5;j++)
 {
 }
 for(f=1;f<=i*2-1;f++)
 {
 m=f+64;
 printf("%c ",m);
 }
 printf("\n");
}
getch();
}