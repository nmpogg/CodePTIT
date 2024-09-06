#include <stdio.h>
#include <math.h>

int main(){
	int t;
	scanf("%d", &t);
	int p = 1;
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[n], c[100000];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int k = 0;
		int count;
		for(int i = 0; i < n; i++){
			if(a[i] >= 2){			
				count = 1;
				for(int j = 2; j <= sqrt(a[i]); j++){
					if(a[i] % j == 0){
						count = 0;
						break;
					}
				}
				if(count == 1){
					b[k] = a[i];
					k++;
				}
			}
		}
		for(int i = 0; i < k; i++){
			for(int j = i + 1; j < k; j++){
				if(b[i] > b[j]){
					int tg = b[i];
					b[i] = b[j];
					b[j] = tg;
				}
			}
		}		
		for(int i = 0; i < k; i++){
			c[b[i]]++;
		}
		printf("Test %d:\n", p);
		p++;
		for(int i = 0; i < k; i++){
			if(c[b[i]] >= 1){
				printf("%d xuat hien %d lan\n", b[i], c[b[i]]);
				c[b[i]] = 0;
			}
		}
	}
	return 0;
}
