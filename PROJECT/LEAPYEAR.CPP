#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int yr;
printf("\nEnter year\n");
scanf("%d",&yr);
(yr%4==0)?printf("This is leap year"):printf("This is not leap year");
getch();
}