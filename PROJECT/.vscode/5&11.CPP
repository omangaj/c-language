#include<stdio.h>
int  main(){
clrscr();
int n;
printf("\nEnter number\n");
scanf("%d",&n);
n%5==0&n%11==0?printf("This number divisible by 5 & 11"):printf("This number not divisible by 5 & 11");
return 0;
}