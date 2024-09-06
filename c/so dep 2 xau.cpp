#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h> 

int check1(char a[]){
	int len = strlen(a);
	if(a[0] == '8' && a[len-1] == '8') return 1;
	return 0;
}

int check2(char a[]){
	int len = strlen(a);
	int sum = 0;
	for(int i = 0; i < len; i++){
		sum += a[i] - '0';
	}
	if(sum % 10 == 0) return 1;
	return 0;
}

int check3(char a[]){
	int len = strlen(a);
	for(int i = 0; i < len; i++){
		if(a[i] != a[len-i-1]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char a[505];
		gets(a);
		if(check1(a) && check2(a) && check3(a)) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}
