#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n1,n2,n3;
printf("\nEnter numbers\n");
scanf("%d%d%d",&n1,&n2,&n3);
if ((n1>n2)&&(n1>n3))
{
 printf("\nn1 greater than n2 & n3");
}
else if ((n2>n1)&&(n2>n3))
{
 printf("\n n2 greater than n1 & n3");
}
else
{
printf("\nn3 greater than n1 & n2");
}
getch();
}