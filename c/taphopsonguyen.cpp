#include <stdio.h>

void giao(int a[], int n, int b[], int m){
	int c[100], k = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i] == b[j]){
				c[k] = a[i];
				k++;
			}
		}
	}
	for(int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
}

void hieu(int a[], int n, int b[], int m){
	int c[100], k = 0;
	for(int i = 0; i < n; i++){
		int test = 1;
		for(int j = 0; j < m; j++){
			if(a[i] == b[j]){
				test = 0;
				break;
			}
		}
		if(test) c[k++] = a[i];
	}
	for(int i = 0; i < k; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
}

int main(){
	int m, n;
	scanf("%d %d", &n, &m);
	int a[100], b[100];
	for(int i = 0 ; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++){
		scanf("%d", &b[i]);
	}
	giao(a, n, b, m);
	printf("\n");
	hieu(a, n, b, m);
	hieu(b, m, a, n);
	return 0;
}
