#include <stdio.h>

int UCLN(long long a, long long b){
	while(a != b){
		if(a > b){
			a -= b;
		}
		else b -= a;
	}
	return a;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, c, d;
		scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
		if(UCLN(a, b) == UCLN(c, d)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
