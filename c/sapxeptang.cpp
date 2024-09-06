#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int tg;
	for(i = 0; i < n - 1; i++){
		if(a[i + 1] < a[i]){
			tg = a[i];
			a[i] = a[i + 1];
			a[i + 1] = tg;
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	
	return 0;
}
