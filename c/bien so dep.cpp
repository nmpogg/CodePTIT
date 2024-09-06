#include <stdio.h>
#include <string.h>

int btf(char s[]){
	if(s[6] == s[7] && s[7] == s[8] && s[10] == s[11]) return 1;
	if((s[6] == '6' || s[6] == '8') && (s[7] == '6' || s[7] == '8') && (s[8] == '6' || s[8] == '8') && (s[10] == '6' || s[10] == '8') && (s[11] == '6' || s[11] == '8')) return 1;
	if(s[6] == s[7] && s[7] == s[8] && s[8] == s[10] && s[10] == s[11]) return 1;
	if(s[6] < s[7] && s[7] < s[8] && s[8] < s[10] && s[10] < s[11]) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);z
	getchar();
	while(t--){
		char s[15];
		gets(s);	
		if(btf(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
