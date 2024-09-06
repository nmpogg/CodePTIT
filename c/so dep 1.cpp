#include <stdio.h>
#include <string.h>

int sochan(char a){
	if(a == '0' || a == '2' || a == '4' || a == '6' || a == '8') return 1;
	return 0;
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
			if(s[i] != s[strlen(s)-i-1] || !sochan(s[i])) check = 0;
		}
		if(check == 1) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
