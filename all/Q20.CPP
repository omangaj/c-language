#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i=1,last;
printf("Enter ascii values ");
scanf("%d",&last);
while(i<=last)
{
 printf("%d %c\t",i);
 i++;
}
getch();
}