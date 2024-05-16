#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,rev,ld,md,fd;
printf("Enter 3 digit number");
scanf("%d",&a);
printf("\nbefore reverse number=%d\n",a);
ld=a%10;
md=(a/10)%10;
fd=a/100;
rev=ld*100+md*10+fd;
printf("\nreverse number=%d\n",rev);
a==rev?printf("This is palindrame"):printf("This is not palindrome");
getch();
}
