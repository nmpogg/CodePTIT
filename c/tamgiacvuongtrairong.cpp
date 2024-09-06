#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int p = 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= p; j++){
			if(i == 1 || i == n || j == 1 || j == p) printf("*");
			else printf(".");
		}
		p++;
		printf("\n");
	}
	return 0;
}
