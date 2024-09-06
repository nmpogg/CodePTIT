#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int lap = 0;
		for(int i = 0; i < n - 1; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] == a[j]){
					lap = a[i];
					break;
				}
			}
			if(lap != 0) break;
		}
		if(lap == 0) printf("NO\n");
		else printf("%d\n", lap);
	}
	return 0;
}
