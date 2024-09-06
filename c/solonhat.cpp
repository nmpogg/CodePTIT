#include <stdio.h>

int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){		
		scanf("%d", &n);
		long a[n], max = 0;
		for(int i = 0;i < n;i++){
			scanf("%ld", &a[i]);			
			if(a[i] > max) max = a[i];
		}
		printf("%ld\n", max);
		for(int i = 0; i < n; i++){
			if(a[i] == max) printf("%d ", i);
		}
		printf("\n");
			
	}
	return 0;
}
