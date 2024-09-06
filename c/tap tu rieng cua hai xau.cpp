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
	char s1[101], s2[101];
	gets(s1);
	gets(s2);
	char a1[101][101], a2[101][101];
	int k1 = 0, k2 =0;
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
	char khutrung[100][100];
	int khu = 0;
	for(int i = 0; i < k1; i++){
		for(int j = 0; j < k2; j++){
			if(!strcmp(a1[i], a2[j])) a1[i][0] = '\n';
			
		}
		if(a1[i][0] != '\n') strcpy(khutrung[khu++], a1[i]);
	}
	
	for(int i = 0; i < khu-1; i++){
		for(int j = i+1; j < khu; j++){
			if(strcmp(khutrung[i], khutrung[j]) > 0){
				char temp[105];
				strcpy(temp, khutrung[i]);
				strcpy(khutrung[i], khutrung[j]);
				strcpy(khutrung[j], temp);
			}
		}
	}
	
	for(int i = 0; i < khu; i++){
		for(int j = i+1; j < khu; j++){
			if(!strcmp(khutrung[i], khutrung[j])) khutrung[j][0] = '\n';
		}
		if(khutrung[i][0] != '\n') printf("%s ", khutrung[i]); 
	}
	return 0;
}


