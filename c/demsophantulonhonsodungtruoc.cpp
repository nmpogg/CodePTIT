#include <stdio.h>

int main(){
	int n, t;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], cnt = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int max = a[0];
		for(int i = 0; i < n; i++){
			if(a[i] >= max){
				cnt++;
				max = a[i];
			}
		}
		printf("%d\n", cnt);
	}
	return 0;
}
