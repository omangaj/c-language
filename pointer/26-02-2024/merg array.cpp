#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,s1,s2,s,j,temp;
	int *p1,*p2;
	
	printf("Enter size of array:");
	scanf("%d",&s1);

	p1=(int*)malloc(s1*sizeof(int));
	
	printf("Enter element in array p1:\n");
	for(i=0;i<s1;i++)
		scanf("%d",&p1[i]);
	
	printf("\nEnter size of array p2:");
	scanf("%d",&s2);
	
	p2=(int*)malloc(s2*sizeof(int));

	printf("Enter element in array p2:\n");
	for(i=0;i<s2;i++)
		scanf("%d",&p2[i]);
	
	printf("element in array p1:\n");
	for(i=0;i<s1;i++)
		printf("%d\t",p1[i]);
	
	printf("\nelement in array p2:\n");
	for(i=0;i<s2;i++)
		printf("%d\t",p2[i]);
	
    s=s1+s2;
    p1=(int*)realloc(p1,s*sizeof(int));

    for(i=0,j=s1;i<s2 && j<s;i++,j++)
        p1[j]=p2[i];

    printf("\ndisplay merge array\n");
    for(i=0;i<s;i++)
        printf("%d\t",p1[i]);
    
     printf("\nsorting the array\n");
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
           if (p1[i]<p1[j])
           {
            temp=p1[i];
            p1[i]=p1[j];
            p1[j]=temp;
           }
           
        }
        
    }
     for(i=0;i<s;i++)
        printf("%d\t",p1[i]);

return 0;
}
