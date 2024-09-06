#include <stdio.h> 

int main(){
	long long t;
	scanf("%lld", &t);
	while(t--){
		long long n,k;
		scanf("%lld", &n);
		long long a[n];
		for(long long i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		int check = 1;
		for(long long i = 0; i < n-1; i++){
			for(long long j = i+1; j<n;j++){
				if(a[i] == a[j]){
					k = a[i];
					check = 0;
					break;
				}
			}
			if(!check) break;
		}
		if(!check) printf("%lld", k);
		if(check) printf("NO");
		printf("\n");
	}
	return 0;
}
