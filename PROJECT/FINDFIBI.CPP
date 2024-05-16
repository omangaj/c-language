#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int limit,f1=0,f2=1,fib;
printf("Enter limit\n");
scanf("%d",&limit);
printf("%d %d ",f1,f2);
while(limit!=0)
{
fib=f1+f2;
f1=f2;
f2=fib;
printf("%d ",fib);
--limit;
}
getch();
}