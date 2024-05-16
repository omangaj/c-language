#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float c,v,r;
printf("\nEnter current and voltage\n");
scanf("%f%f",&c,&v);
r=v/c;
printf("\nresistance is=%f\n",r);
getch();
}