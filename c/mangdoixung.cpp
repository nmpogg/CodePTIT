#include <stdio.h>

int main(){
	int t, n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		int a[n], count = 0;
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; i++){
			if(a[i] != a[n - i - 1]){
				count++;
			}
		}
		if(count == 0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
