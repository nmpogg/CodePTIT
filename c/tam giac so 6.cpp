#include<stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int t  =  n - 1;
	for(int i = 1; i <= n; i++){
		int x = i - 1;
			for(int k = 1; k <= t; k++)
			printf("~");
		for(int j = 1; j <= 2 * i - 1; j++){
			if(j <= i) printf("%d", 2 * j);
			else {
				printf("%d", 2 * x);
				x--;
			}	
		}
		t--;
		printf("\n");
	}
	return 0;
}

