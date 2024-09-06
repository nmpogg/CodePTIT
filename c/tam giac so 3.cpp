#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		int x = i-1;
		for(int j = 1; j <= 2 * i - 1; j++){
			if(j <= i) printf("%d", 2 * j - 1);
			else {
				printf("%d", 2 * x - 1);
				x--;
			}	
		}
		printf("\n");
	}
	return 0;
}

