#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int cp,sp;
printf("\nEnter cost price\n");
scanf("%d",&cp);
printf("\nEnter sell price\n");
scanf("%d",&sp);
cp<sp?printf("We have profit"):printf("Ww have loss");
getch();
}
