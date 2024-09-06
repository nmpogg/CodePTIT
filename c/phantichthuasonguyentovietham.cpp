#include <stdio.h>

void factor(long long n){
	long long i = 2, a[100], b[100], k = 0, count = 0;
	while(n >= 2){
		if(n % i == 0){
			int cnti = 0;
			while(n % i == 0){
				cnti++;
				n /= i;
			}
			a[k] = i;
			k++;
			b[count] = cnti;
			count++;
		}
		else i++;
	}
	printf(" = %lld^%lld ", a[0], b[0]);
	for(int i = 1; i < k; i++){
		printf("* %lld^%lld ", a[i], b[i]);
	}
	printf("\n");
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("%lld", n);
		factor(n);
	}
	return 0;
}
