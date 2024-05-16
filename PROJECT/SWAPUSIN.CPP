#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
printf("\nEnter two values=\n");
scanf("%d%d",&a,&b);
printf("\nBefore swapping a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping a=%d b=%d",a,b);
getch();
}