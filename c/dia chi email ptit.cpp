#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[51];
	gets(a);
	
	for(int i = 0 ; i < strlen(a); i++){
		a[i] = tolower(a[i]);
	}
	
	char s[51][51];
	int k = 0;
	
	char *token = strtok(a, " ");
	while(token != NULL){
		strcpy(s[k++], token);
		token = strtok(NULL, " ");
	}
	
	for(int i = 0 ; i < k; i++){
		if(i < k-1) printf("%c", s[i][0]);
		else printf("%s", s[i]);
	}
	printf("@ptit.edu.vn");
	
	return 0;
}
