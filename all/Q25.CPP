#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int n1,n2,i,m,lcm;
printf("Enter number:\n");
scanf("%d\t%d",&n1,&n2);
m=(n1>n2)?("%d",n1):("%d",n2);
while(1)
{
 if((m%n1==0) && (m%n2==0))
 {
 printf("lcm of %d & %d: %d",n1,n2,m);
 break;
 }
 m++;
}
getch();
}