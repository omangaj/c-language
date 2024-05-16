#include<stdio.h>
#include<conio.h>
int main()
{ char ch[]={"good"};
   void show(char *);
   show(ch);
   printf("%s",ch);
	 return 0;
}
void show(char *ptr){
	*ptr='m';
}

