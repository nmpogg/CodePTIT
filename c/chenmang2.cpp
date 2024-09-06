#include <stdio.h>

int main(){
	int t, m, n, p, i, j, test = 1;
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d", &n, &m, &p);
		int a[n], b[m];
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);		
		}
	
		for(j = 0; j < m; j++){
			scanf("%d", &b[j]);
		}
		printf("Test %d:\n", test);
		test++;
		
		for(i = 0; i < p; i++){
			printf("%d ", a[i]);
		}
		
		for(j = 0; j < m; j++){
			printf("%d ", b[j]);
		}
		
		for(i = p; i < n; i++){
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
