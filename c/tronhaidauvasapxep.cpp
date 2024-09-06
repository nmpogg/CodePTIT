#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	for(int k = 1; k <= t; k++){
		int n;
		scanf("%d", &n);
		int a[n], b[n], c[2*n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			scanf("%d", &b[i]);
		}
		for(int i = 0; i < n-1; i++){
			for(int j = i+1; j < n; j++){
				if(a[i] > a[j]){
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		for(int i = 0; i <n-1; i++){
			for(int j = i+1; j < n; j++){
				if(b[i] < b[j]){
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}			
		}
		
		int arr1 = 0, arr2 = 0;
		for(int i = 0; i < 2*n; i += 2){
			c[i] = a[arr1];
			arr1++;
		}
		for(int i = 1; i < 2*n; i +=2){
			c[i] = b[arr2];
			arr2++;
		}
		printf("Test %d:\n", k);
		for(int i = 0; i < 2*n; i++){
			printf("%d ", c[i]);
		}
		printf("\n");
	}
	return 0;
}
