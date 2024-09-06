#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int k = n - 1;
	int p = k + n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= p; j++){		
			if(j <= k){
				printf("~");
			}
			else printf("*");
		}
		k--;
		p--;
		printf("\n\n");
	}
	return 0;
}
