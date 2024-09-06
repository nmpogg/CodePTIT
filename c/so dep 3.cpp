#include <stdio.h>
#include <string.h>

int prime(char a){
	if(a == '2' || a == '3' || a == '5' || a == '7') return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[501];
		gets(s);
		int check = 1;
		for(int i = 0; i < strlen(s); i++){
			if(s[i] != s[strlen(s)-i-1] || !prime(s[i])) check = 0; 
		}
		if(check) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
