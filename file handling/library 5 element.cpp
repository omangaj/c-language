#include<stdio.h>
struct library{
	int id;
	char name[10],author[10];
	int price;
};

struct library l[5];
int main()
{
	printf("omkar");
	int i,size;
	FILE  *fptr;
	fptr=fopen("D:\\class pune\\library.txt","a");
	size=sizeof(l)/sizeof(l[0]);
	printf("\n%d",size);
	printf("\nEnter id name price and author of book\n");
	for(i=0;i<size;i++)
	{
		fwrite(&l[i],sizeof(l[i]),1,fptr);
		scanf("%d\t%s\t%d\t%s",&l[i].id,&l[i].name,&l[i].price,&l[i].author);
	}
	fclose(fptr);
	printf("book Data Save Success...............");	
	
	printf("\n\n\n");
	
	fptr=fopen("D:\\class pune\\library.txt","r");
	for(i=0;i<size;i++)
	{
		fread(&l[i],sizeof(l[i]),1,fptr);
		printf("%d\t%s\t%d\t%s",l[i].id,l[i].name,l[i].price,l[i].author);
	}

	fclose(fptr);
	
	return 0;
}

