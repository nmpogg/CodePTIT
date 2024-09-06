#include <stdio.h>
#include <string.h>

int lama(char c){
	if(c == 'I') return 1;
	else if(c == 'V') return 5;
	else if(c == 'X') return 10;
	else if(c == 'L') return 50;
	else if(c == 'C') return 100;
	else if(c == 'D') return 500;
	else if(c == 'M') return 1000;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[25];
		gets(s);
		int count = 0;
		
		for(int i = 0; i < strlen(s); i++){
			count += lama(s[i]);
		}
		
		printf("%d", count);
	}
}
