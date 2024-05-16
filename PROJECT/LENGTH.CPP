#include<stdio.h>
#include<conio.h>
void main(){
int cm;
float m,km;
clrscr();
printf("Enter length in centimeter=");
scanf("%d",&cm);
m=cm*0.01;
km=cm*0.001;
printf("lenrth in m %f",m);
printf("\nlength in km %f\n",km);
getch();
}