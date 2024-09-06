#include <stdio.h>

int main(){
	int m, n, adr, i, j;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int j =0; j < m; j++){
		scanf("%d", &b[j]);
	}
	scanf("%d", &adr);
	
	for(i = 0; i < adr; i++){
		printf("%d ", a[i]);
	}
	for(j = 0; j < m; j++){
		printf("%d ", b[j]);
	}
	for(i = adr; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}
