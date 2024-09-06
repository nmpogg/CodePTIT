#include <stdio.h>
#include <string.h>
#include <ctype.h>

int strcmp1(char a[], char b[]){
	int n1 = strlen(a);
	int n2 = strlen(b);
	if(n1 != n2) return 0;
	for(int i = 0; i < n1; i++){
		if(tolower(a[i]) != tolower(b[i])) return 0;
	}
	return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	getchar();
	for(int k = 1; k <= t; k++){
		char s1[201], s2[21];
		gets(s1);
		gets(s2);
		
		char a[201][201];
		int n = 0;
		
		char *token = strtok(s1, " ");
		while(token != NULL){
			strcpy(a[n++], token);
			token = strtok(NULL, " ");
		}
		
		printf("Test %d: ", k);
		for(int i = 0; i < n; i++){
			if(strcmp1(a[i], s2)) a[i][0] = '\n';
			if(a[i][0] != '\n') printf("%s ", a[i]);
		}
		printf("\n");
	}
	return 0;
} 
