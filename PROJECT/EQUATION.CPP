#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
int a,b,c,D;
printf("\nEnter values\n");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
(D>0)?printf("Root1=%d\nRoot2=%d",(-b+sqrt(D))/2*a,(-b+sqrt(D)/2*a)):(D==0)?printf("Root1=%d\nRoot2=%d",(-b/2*a),(-b/2*a)):printf("Roots are Imaginary");
getch();
}

