#include <stdio.h>

int main(){
	int t, k = 1; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[100000], b[100000] = {0};
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for(int i = 0; i < n; i++){
			b[a[i]]++;
		}
		printf("Test %d:\n", k);
		k++;
		for(int i = 0; i < n; i++){
			if(b[a[i]] >= 1){
				printf("%d xuat hien %d lan\n", a[i], b[a[i]]);
				b[a[i]] = 0;
			}
		}
	}
}
