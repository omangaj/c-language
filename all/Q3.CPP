#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
char c='a';
printf("Enter ascii values a & z:");
scanf("%d\t%d",&a,&z);
while(c<='z')
{
 printf("%c\t",c);
 c++;
}
getch();
}