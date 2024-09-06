#include <stdio.h>
#include <math.h>

int orn(long long n){
	long long n1 = n;
	int du;
	long long stn = 0;
	while(n > 0){
		du = n % 10;
		stn = stn * 10 + du;
		n /= 10;
	}
	if(stn == n1) return 1;
	return 0;
}

int check(long long n){
	int du;
	while(n > 0){
		du = n % 10;
		if(du % 2 == 0){
			return 0;
			break;
		}
		n /= 10;		
	}
	return 1;
}

int sum(long long n){
	int du;
	long long sum = 0;
	while(n > 0){
		du = n % 10;
		sum += du;
		n /= 10;
	}
	if(sum % 2 == 0) return 0;
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(orn(n) == 1 && check(n) == 1 && sum(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}
