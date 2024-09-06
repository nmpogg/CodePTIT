#include<stdio.h>

int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i = n; i >= 1; i--){
		for(k = i - 2; k >= 0; k--){ 
			printf("~");
		}
	   for(j = 1; j <= n; j++){
			if(i == 1 || i == n || j == 1 || j == n) printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}
