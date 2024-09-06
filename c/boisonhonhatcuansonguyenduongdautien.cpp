#include <stdio.h>

int BSNN(int n){
	long long bcnn = n;
	for(int i = 1; i <= n; i++){
		if(bcnn % i != 0) bcnn++;
	}
	return bcnn;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%lld\n", BSNN(n));
	}
	return 0;
}
