#include <stdio.h>
#include <string.h>
#include <ctype.h>
char* up(char s[]){
	for(int i = 0; i < strlen(s); i++){
		s[i] = toupper(s[i]);
	}
	return s;
}


int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[81];
		gets(a);
		int n = strlen(a);
		
		for(int i = 0; i < n; i++){
			a[i] = tolower(a[i]);
		}
		char s[21][21];
		int k = 0;
		char *token = strtok(a, " ");
		while(token != NULL){
			strcpy(s[k++], token);
			token = strtok(NULL, " ");
		}
		
		for(int i = 1; i < k; i++){
			s[i][0] = toupper(s[i][0]);
			printf("%s", s[i]);
			if(i < k-1) printf(" ");
			if(i == k-1) printf(",");
		}
		up(s[0]);
		printf(" %s", s[0]);
		printf("\n");
	}
	return 0;
}


