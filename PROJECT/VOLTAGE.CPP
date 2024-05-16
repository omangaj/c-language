#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float c,v,r;
printf("\nEnter current and resistance\n");
scanf("%f%f",&c,&r);
v=c*r;
printf("\nvoltage is=%f\n",v);
getch();
}