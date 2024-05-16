#include <stdio.h>
int main()
{   
    int a[10][10],b[10][10],i,j,s1,s2,m,n,flag=0;

    printf("Enter size of a[i]: ");
    scanf("%d", &s1);
 
    printf("Enter size of a[j]: ");
    scanf("%d", &s2);

    printf("Enter values in matrix a: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

       printf("Enter values in matrix b: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nvalues in matrix a: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nvalues in matrix b: \n");
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    flag=0;
    for (i=0;i<s1;i++)
    {
        for (j=0;j<s2;j++)
        {
        	m=a[i][j];
        	n=b[i][j];
          	if(m==n)
          	{
          		flag=0;
			}
          		
        	else
        	{
        		flag=1;
        		break;
			}
        		
        }
    }
    
    if(flag==1)
    	printf("\nThis matrix are equal");
    else
    	printf("\nThis matrix are not equal");
    	
    return 0;
}
