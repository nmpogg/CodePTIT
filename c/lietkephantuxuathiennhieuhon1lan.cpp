#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[10000] = {0};
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);		
	}
	
	for(int i = 0; i < n; i++){
		b[a[i]]++;
	}
	int count = 0;
	for(int i = 0; i < n; i++){
		if(b[a[i]] > 1){
			++count;
			b[a[i]] = 0;
		}
	}
	printf("%d\n", count);
	int c[10000] = {0};
	for(int i = 0; i < n; i++){
		c[a[i]]++;
	}
	for(int i = 0; i < n; i++){
		if(c[a[i]] > 1){
			printf("%d ", a[i]);
			c[a[i]] = 0;
		}
	}
	return 0;
	
}
