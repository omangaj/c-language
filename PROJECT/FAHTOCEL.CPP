#include<stdio.h>
#include<conio.h>
void main(){
float fah,cel;
clrscr();
printf("Enter tem in fahrenheit ");
scanf("%f",&fah);
cel=(fah-32)*5/9;
printf("Tem in fah to cel=%f",cel);
getch();
}