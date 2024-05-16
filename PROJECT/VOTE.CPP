#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int age;
printf("\nEnter age\n");
scanf("%d",&age);
age>=18?printf("congratulation! You are eligible for vote"):printf("Sorry!You are not eligible for vote");
getch();
}