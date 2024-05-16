#include <stdio.h>
#include<string.h>

int main(){
    char a[30],w[20];
    printf("Enter the string\n");
    gets(a);
    printf("Enter the word that index find\n");
    gets(w);
    int len,i,j,k,b[10],count=0,m;
    len=strlen(w);
    for (int i=0,k=0;a[i] && w[k];i++)
    {
        if (a[i]==w[k] && a[i+1]==w[k+1])
        {
        	b[k]=i;
        	m=i;
        	count++;
        	k++;
    	}
	}  
	b[count]=m+1;
	for(i=0;i<len;i++)
		printf("%d==%c\t",b[i],a[b[i]]); 

    return 0;
}
