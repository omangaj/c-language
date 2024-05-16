#include<stdio.h>
#include<conio.h>
void main(){
int len,brdth,area;
clrscr();
printf("\nEnter len and breadth of rectangle\n");
scanf("%d%d",&len,&brdth);
area=len*brdth;
printf("\nArea of rectangle is=%d\n",area);
getch();
}