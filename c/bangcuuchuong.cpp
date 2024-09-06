#include <stdio.h>

int main(){
	unsigned int n, i, h;
	scanf("%u", &n);
	for(i = 1; i <= 10; i++){
		h = i * n;
		printf("%u ", h);
	}
	return 0;
}
