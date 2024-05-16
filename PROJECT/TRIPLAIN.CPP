#include<stdio.h>
#include<conio.h>
void main (){
clrscr();
int n1,n2;
printf("\nEnter value in n1 & n2\n");
scanf("%d%d",&n1,&n2);
n1==n2?printf("sum of number & multiply*3=%d",(n1+n2)*3)
:printf("sum of numbers=%d",n1+n2);
getch();
}