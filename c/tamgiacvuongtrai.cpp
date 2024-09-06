#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int m = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			printf("*");
			if(m > n) break;
		}
		m++;
		printf("\n");
	}
	return 0;
}
