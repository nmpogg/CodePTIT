#include <stdio.h>

int main(){
	int m, n;
	scanf("%d %d", &m, &n);
	int arr[m][n];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n ;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	int a, b;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < n; i++){
		int temp = arr[a-1][i];
		arr[a-1][i] = arr[b-1][i];
		arr[b-1][i] = temp;
	}
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n ;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
