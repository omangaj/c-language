#include<stdio.h>
int main()
{ int arr[] = {0,1,2,3,4} ;
int i, *ptr;
for (ptr = arr + 4 ; ptr = arr; ptr--)	
	printf ("%d ",*ptr);
return 0;
}
