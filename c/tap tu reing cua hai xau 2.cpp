#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s1[201], s2[201];
		gets(s1);
		gets(s2);
		
		char a1[201][201], a2[201][201];
		int k1 = 0, k2 = 0;
		
		char *token1 = strtok(s1, " ");
		while(token1 != NULL){
			strcpy(a1[k1++], token1);
			token1 = strtok(NULL, " ");
		}
		
		char *token2 = strtok(s2, " ");
		while(token2 != NULL){
			strcpy(a2[k2++], token2);
			token2 = strtok(NULL, " ");
		}
		
		char c[201][201];
		int k =0;
		
		for(int i = 0; i < k1; i++){
			for(int j = 0; j < k2; j++){
				if(!strcmp(a1[i], a2[j])) a1[i][0] = '@';
			}
			if(a1[i][0] != '@') strcpy(c[k++], a1[i]);
		}
		
		for(int i = 0; i < k; i++){
			for(int j = i+1; j < k; j++){
				if(strcmp(c[i], c[j]) > 0){
					char temp[201];
					strcpy(temp, c[i]);
					strcpy(c[i], c[j]);
					strcpy(c[j], temp);
				}
			}
		}
		
		for(int i = 0; i < k; i++){
			for(int j = i+1; j < k; j++){
				if(!strcmp(c[i], c[j])) c[j][0] = '@';
			}
			if(c[i][0] != '@') printf("%s ", c[i]);
		}
		printf("\n");	
	}
	return 0;
}
