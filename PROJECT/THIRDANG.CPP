#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
printf("\nEnter two angles of triangle\n");
scanf("%d%d",&a,&b);
c=180-(a+b);
printf("The third angle of triangle is=%d",c);
getch();
}