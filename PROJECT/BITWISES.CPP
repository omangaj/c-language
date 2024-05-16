#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("\nEnter value of a & b\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("Value of a=%d",a);
getch();
}