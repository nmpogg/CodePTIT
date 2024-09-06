#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	int a[n];
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int p;
	scanf("%d", &p);
	for(i =n - p; i < n; i++){
		printf("%d ", a[i]);
		
	}
	for(i = 0; i < n - p; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
