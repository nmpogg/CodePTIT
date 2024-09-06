#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[105];
	gets(a);
	
	for(int i =0; i < strlen(a); i++){	
		a[i] = tolower(a[i]);
	}
	
	char b[105][105];
	int n = 0;
	
	char *token = strtok(a, " ");
	while(token != NULL){
		strcpy(b[n++], token);
		token = strtok(NULL, " ");
	}
	
	int c[105] = {0};
	
	for(int i = 0 ; i < n; i++){
		if(c[i] == 0){
			int cnt = 1;
			for(int j = i+1; j < n; j++){
				if(strcmp(b[i], b[j]) == 0){
					cnt++;
					c[j] = 1;
				}
			}
			printf("%s %d\n", b[i], cnt);
		}
	}	
	return 0;
} 
