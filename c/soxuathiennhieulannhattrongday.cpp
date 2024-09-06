#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[100000] = {0};
		for(int i = 0; i < n ; i++){
			scanf("%d", &a[i]);
		}
		
		for(int i = 0; i < n; i++){
			b[a[i]]++;
		}
		int max = 0;
		for(int i = 0; i < n; i++){
			if(b[a[i]] > max){
				max = b[a[i]];				 
			}
		}
		for(int i = 0; i < n; i++){
			if(b[a[i]] == max){
				printf("%d ", a[i]);
				b[a[i]] = 0;
			}
		}
		printf("\n");
	}
	return 0;
}
