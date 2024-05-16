#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float c,v,r;
printf("\nEnter voltage and resistance\n");
scanf("%f%f",&v,&r);
c=v/r;
printf("\ncurrent is=%f\n",c);
getch();
}