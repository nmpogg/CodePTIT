#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int min(int a,int b){return(a<b)?a:b;}
int max(int a,int b){return(a>b)?a:b;}

int main()
{
	char s[100];
	gets(s);
	for(int j = 0; j < strlen(s); j ++)
	s[j] = tolower(s[j]);
	char *ten[100];
	char *p = strtok(s," ");
	int i = 0;
	while(p != NULL){
		ten[i++] = p;
		p = strtok(NULL, " ");
	}
	
	for(int j = 0; j <= i-2; j ++)
	{
		putchar(ten[j][0]);
	}
	printf("%s", ten[i-1]);
	printf("@ptit.edu.vn");
	return 0;
}
