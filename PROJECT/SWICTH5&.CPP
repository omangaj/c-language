#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter number a & b\n");
scanf("%d",&a);
switch((a%5==0)&&(a%11==0)){
case 1:
printf("This is number divisible by 5 & 11");
break;
case 0:
printf("This is number not divisible by 5 & 11");
break;
}
getch();
}
