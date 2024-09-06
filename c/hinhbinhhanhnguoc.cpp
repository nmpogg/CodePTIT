#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int n = 0;
	int p = b + n;
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= p; j++){
			if(j <= n) printf("~");
			else printf("*");
		}
		n++;
		p++;
		printf("\n");
	}
	return 0;
}
