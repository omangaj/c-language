#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
int i,count=0;
printf("\nEnter number\n");
scanf("%d",&i);
while(i>0)
{
count++;
i=i/10;
}
printf("\ncount of digit=%d",count);
getch();
}