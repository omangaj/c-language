#include<stdio.h>
#include<string.h>
int main()
{
	char c[30];
	printf("Enter the string:\n");
	gets(c);
	int i,vowel=0,consonant=0;
	
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]=='A'|| c[i]=='E'|| c[i]=='I'|| c[i]=='O'|| c[i]=='U'|| c[i]=='a'|| c[i]=='e'|| c[i]=='i'|| c[i]=='o'|| c[i]=='u')
			vowel++;
		else
			consonant++;	
	}
	
	printf("vowel=%d  consonant=%d",vowel,consonant);
	return 0;
}
