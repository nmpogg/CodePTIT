#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char s[]){
	int n = strlen(s);
	int cnt[10] = {0};
	for(int i = 0; i < n; i++){
		if(s[0] == '0') return -1;
		if(!isdigit(s[i])) return -1;
		cnt[s[i] - '0']++;
	}
	for(int i = 0; i < 10; i++){
		if(cnt[i] == 0) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[1001];
		gets(a);
		int n = strlen(a);
		if(check(a) == -1) printf("INVALID\n");
		else if(check(a) == 1) printf("YES\n");
		else printf("NO\n");	
		
	}
	return 0;
}


