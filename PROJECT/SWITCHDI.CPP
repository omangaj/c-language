#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char a;
printf("\nEnter character\n");
scanf("%c",&a);
switch((a>='a' && a<='z')||(a>='A'&& a<='Z')){
case 1:
printf("This is alphabet ");
break;
case 0:
switch(a>='1'&& a<='9'){
case 1:
printf("This is digit");
break;
case 0:
printf("This is symbol");
break;
}
break;
}
getch();
}
