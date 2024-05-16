#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,ld,md3,md2,fd,swap;
printf("\nEnter 4 digit number\n");
scanf("%d",&a);
ld=a%10;
md3=(a%100)/10;
md2=(a/100)%10;
fd=a/1000;
swap=ld*1000+md2*100+md3*10+fd;
printf("\swap last & first digit numbers=%d\n",swap);
getch();
}
