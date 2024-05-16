#include<stdio.h>
#include<conio.h>
int main() 
{ 
   char ch[20]; 
   int i; 
  for(i = 0;i<19;i++ ) 
     *( ch + i) = 67; 
     *(ch + i) = '\0'; 
     printf ("%s", ch) ;
   getch();
}

