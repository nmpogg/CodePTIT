#include<stdio.h>
#include<string.h>

int main(){
	char s[100001];
	gets(s);
	int n = strlen(s);
	printf("%lld", n-1);
	return 0;
}
