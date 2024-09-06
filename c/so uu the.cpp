#include <stdio.h>
#include <string.h>
#include <ctype.h>

int check(char s[]){
	int n = strlen(s);
	for(int i = 0; i < n; i++){
		if(!isdigit(s[i]) || s[0] == '0') return -1;
	}
	
	int countle = 0, countchan = 0;
	
	for(int i = 0; i < n; i++){
		if((s[i] - '0') % 2 == 0) countchan++;
		else countle++;
	}
	
	if((n % 2 == 0 && countchan > countle) || (n % 2 == 1 && countchan < countle)) return 1;
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[1001];
		gets(s);
		if(check(s) == -1) printf("INVALID\n");
		else if(check(s)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
