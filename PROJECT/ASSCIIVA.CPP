#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char c;
printf("\nEnter any character\n");
scanf("%c",&c);
(c>='a' && c<='z' || c>='A' && c<='Z')?printf("Ascii value of character %c=%d",c,c):printf("Invalid input");
getch();
}