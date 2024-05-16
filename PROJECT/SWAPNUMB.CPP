#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("\nEnter two values=\n");
scanf("%d%d",&a,&b);
printf("\nBefore swapping a=%d b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping a=%d b=%d",a,b);
getch();
}