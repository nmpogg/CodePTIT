#include <stdio.h>
#include <string.h>

int main(){
	char a[105];
	gets(a);
	char s[105][105];
	int n = 0;
	char *token = strtok(a, " ");
	while(token != NULL){
		strcpy(s[n++], token);
		token = strtok(NULL, " ");
	}
	
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(strcmp(s[i], s[j]) == 0) s[j][0] = '@';
		}
		if(s[i][0] != '@') printf("%s ", s[i]);
	}
	return 0;
}


