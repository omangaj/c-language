#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
clrscr();
float a,area;
printf("\nEnter side of equilateral triangle\n");
scanf("%f",&a);
area=(sqrt(3)/4)*a*a;
printf("Area of equilateral triangle is=%f",area);
getch();
}