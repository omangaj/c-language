#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int ein=170,chef;
printf("\nThe IQ of chef is\n");
scanf("%d",&chef);
chef=chef+7;
if(chef>ein)
{
 printf("yes");
}
else
{
 printf("no");
}
getch();
}