#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		int max = a[n - 1];
		b[0] = a[n-1];
		int j = 1;
		for(int i = n-1; i >= 0; i--){
			if(a[i] > max){
				b[j] = a[i];
				j++;
				max = a[i];
			}
		}
		for(int k = j-1; k >=0 ; k--){
			printf("%d ", b[k]);
		}
	
		printf("\n");
	}
	return 0;
}
