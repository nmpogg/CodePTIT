#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int k = n - 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(j <= k) printf("~");
			else printf("*");
		}
		k--;
		printf("\n");
	}
	return 0;
}
