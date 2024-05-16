#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter value\n");
scanf("%d",&a);
a>0?printf("Number is positive"):a<0?printf("Number is negative"):printf("Number is zero");
getch();
}