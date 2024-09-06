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
		
		long long sum1 = -1e9, sum2 = 0;
		for(int i = 0; i < n; i++){
			sum2 += a[i];
			if(sum1 < sum2){
				sum1 = sum2;
			}
			if(sum2 < 0) sum2 = 0;
		}
		printf("%lld\n", sum1);
    }
    
    return 0;
}

