#include <stdio.h>

int max(int m, int n){
	if(m > n) return m;
	else return n;
}

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int a[max(m, n)][max(m, n)], b[max(m, n)][max(m, n)];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			b[j][i] = a[i][j];
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}
