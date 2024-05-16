#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("\nEnter number a & b\n");
scanf("%d%d",&a,&b);
switch(a>b){
case 1:
printf("This is maximum number a :%d",a);
break;
case 0:
printf("This is maximum number b :%d",b);
break;
}
getch();
}
