#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char a;
printf("\nEnter any value in c\n");
scanf("%ch",&a);
if ((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
{
 printf("This is a character");
}
else if (a>='0'&&a<='9')
{
 printf("This is a digit");
}
else
{
 printf("this is a symbol");
}
getch();
}