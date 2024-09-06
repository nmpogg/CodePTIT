#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			if(j >= i) a[i][j] = j - i;
			else a[i][j] = 0;
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0 ; j < n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
