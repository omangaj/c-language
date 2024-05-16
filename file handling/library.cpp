#include<stdio.h>
struct library{
	int id;
	char name[10],author[10];
	int price;
};

struct library l;
int main(){
	
	FILE  *fptr;
	fptr=fopen("D:\\class pune\\library.txt","a");
	printf("\nEnter id name price and author of book\n");
	scanf("%d\t%s\t%d\t%s",&l.id,&l.name,&l.price,&l.author);
	fwrite(&l,sizeof(l),1,fptr);
	fclose(fptr);
	printf("book Data Save Success...............");	
	printf("\n\n\n");
	
	fptr=fopen("D:\\class pune\\library.txt","r");
	fread(&l,sizeof(l),1,fptr);
	printf("%d\t%s\t%d\t%s",l.id,l.name,l.price,l.author);
	fclose(fptr);
	
	return 0;
}

