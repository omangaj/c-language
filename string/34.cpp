#include <stdio.h>
#include<string.h>

int main(){
    char a[30],w[20],c[20];
    int len,i,j,k,b[10],count=0,m;
    printf("Enter the string\n");
    gets(a);
    len=strlen(a);
    printf("Enter the word that index find\n");
    gets(w);

    for (int i=0,k=0;a[i] && w[k];i++)
    {
        if (a[i]==w[k] && a[i+1]==w[k+1] && a[i+2]==w[k+2])
        {
        	b[k]=i;
        	m=i;
        	count++;
        	k++;
    	}
	}  
	
	b[count]=m+1;
	count++;
	b[count]=m+2;
	printf("remove inex:%d==%c\n",b[count],w[count]); 

	for(i=0,j=0;i<len && j<len;i++)
	{
		if(b[count]>=i)
		{
			c[i]=a[i];
		}
		if(b[count]<=i)
		{
			c[i]=a[i+1];
			j++;
		}
	}
	
	printf("before remove word last index %d\n",b[count]);
	puts(a);
	printf("after remove word last index %d\n",b[count]);
	puts(c);

    return 0;
}
