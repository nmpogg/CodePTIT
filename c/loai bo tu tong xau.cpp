#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h> 

int main(){
	char s1[102], s2[102];
	gets(s1);
	gets(s2);
	char *token = strtok(s1, " ");
	while(token != NULL){
		if(strcmp(token, s2)) printf("%s ", token);
		token = strtok(NULL, " ");
	}
	
	return 0;
}
