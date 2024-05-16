#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
float cel,fah;
printf("Enter tem in celcius ");
scanf("%f",&cel);
fah=(cel*9/5)+32;
printf("Tem cel to fah %f",fah);
getch();
}