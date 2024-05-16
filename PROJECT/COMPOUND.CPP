#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
float p,r,t,ci;
printf("Enter the principle");
scanf("%f",&p);
printf("Enter the interest");
scanf("%f",&r);
printf("Enter the time");
scanf("%f",&t);
ci=p*pow((1+r/100),(t));
printf("Compound interest is=%f",ci);
getch();
}