#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
printf("\nEnter 3 angles of triangle\n");
scanf("%d%d%d",&a,&b,&c);
a==b&&b==c&&c==a?printf("Equilateral"):a==b||b==c||c==a?printf("isolateral"):printf("scalene");
getch();
}