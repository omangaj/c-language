#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a;
printf("\nEnter number a\n");
scanf("%d",&a);
switch(a%2==0){
case 1:
printf("This is even number a :%d",a);
break;
case 0:
printf("This is odd number a :%d",a);
break;
}
getch();
}
