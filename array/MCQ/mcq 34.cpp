#include<stdio.h>
int main()
{
static int a[] = {0,1,2,3,4} ;
static int *p[] = {a, a +1 , a + 2, a + 3, a + 4} ;
int **ptr = p;
printf ("%d\t%d\n", a, *a) ;
printf("%d\t%d\t%d\n", p,*p,**p);
printf("%d\t%d\t%d\n", ptr,*ptr, **ptr);
return 0;
}
