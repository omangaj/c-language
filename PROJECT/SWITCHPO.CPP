#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter number a\n");
scanf("%d",&a);
switch(a>0){
case 1:
printf("This is positive number);
break;
case 0:
switch(a<0){
case 1:
printf("This is negative number);
break;
case 0:
printf("This is zero number);
break;
}
break;\
}
getch();
}
