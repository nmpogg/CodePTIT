#include <stdio.h>
#include <math.h>

void test(long long n){
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			long long cnti = 0;
			while(n % i == 0){
				cnti++;
				n /= i;
			}
			printf("%lld(%lld) ", i, cnti);
		}
	}
	if (n > 1) {
        printf("%lld(1)", n);
    }
}

int main(){
	int t;
	scanf("%d", &t);
	int k = 1;
	while(t--){
		long long n;
		scanf("%lld", &n);
		printf("Test %d: ", k);
		test(n);
		printf("\n");
		k++;
	}
}
