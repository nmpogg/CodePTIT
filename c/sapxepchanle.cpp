#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n], c[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int j = 0, k = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
			b[j] = a[i];
			j++;
		}
		else{
			c[k] = a[i];
			k++;
		}
	}
	for(int i = 0; i < j; i++){
		for(int m = i + 1; m < j; m++){
			if(b[i] > b[m]){
				int tg = b[i];
				b[i] = b[m];
				b[m] = tg;
			}
		}
	}
	for(int i = 0; i < j; i++){
		printf("%d ", b[i]);
	}
	
	for(int i = 0; i < k; i++){
		for(int p = i + 1; p < k; p++){
			if(c[i] > c[p]){
				int tg = c[i];
				c[i] = c[p];
				c[p] = tg;
			}
		}
	}
	for(int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
	return 0;
}
