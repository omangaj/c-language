#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int frnd,capacity,std,total;
printf("\nEnter friend group\n");
scanf("%d",&frnd);
printf("\nEnter the capacity of cource\n");
scanf("%d",&capacity);
printf("\nEnter the student that alredy enrolled\n");
scanf("%d",&std);
total=frnd+std;
if(total<=capacity)
{
 printf("yes");
}
else
{
 printf("no");
}
getch();
}