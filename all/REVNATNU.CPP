#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int i=1,end;
printf("Enter value of n number\n");
scanf("%d",&end);
while(end>=i)
{
printf("\n%d",end);
end--;
}
getch();
}