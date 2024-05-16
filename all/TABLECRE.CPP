#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int table,i=1,end;
printf("\nEnter limit of loop");
scanf("%d",&end);
printf("\ncreate table of ");
scanf("%d",&table);
while(i<=end)
{
printf("\n%d * %d=%d",table,i,(table*i));
i++;
}
getch();
}