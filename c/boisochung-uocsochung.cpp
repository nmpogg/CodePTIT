#include <stdio.h>

int UCLN( long long a, long long b){
	while(a != b){
		if(a > b) a -= b;
		if(b > a) b -= a;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		long long ucln = UCLN(a, b);
		long long bcnn = a * b / ucln;
		printf("%lld %lld\n", bcnn, ucln);
	}
}
