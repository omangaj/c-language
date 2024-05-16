#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c,total;
printf("\nEnter angles of triangles\n");
scanf("%d%d%d",&a,&b,&c);
total=a+b+c;
total==180?printf("This is a triangle"):printf("This is not a triangle");
getch();
}