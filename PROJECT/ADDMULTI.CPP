#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,ld,md,fd,add,multi;
printf("\nEnter 3 digit number\n");
scanf("%d",&a);
ld=a%10;
md=(a/10)%10;
fd=a/100;
add=ld+md+fd;
printf("\addition digit numbers=%d\n",add);
multi=ld*md*fd;
printf("\nmultiply of digit numbers=%d",multi);
getch();
}
