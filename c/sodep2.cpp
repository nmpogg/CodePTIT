#include <stdio.h>
#include <math.h>

int beauty_num(long long n){
	long long digit, stn = 0, sum = 0;
	long long n1 = n;
	while(n > 0){
		digit = n % 10;
		stn = stn * 10 + digit;
		sum += digit;
		n /= 10;
	}
	if(n1 == stn && sum % 10 == 0) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, cnt = 0;
		scanf("%d", &n);
		long long a = pow(10, n-1);
		long long b = pow(10, n);
		for(int i = a; i < b; i++){
			if(beauty_num(i)) cnt++;			
		}
		printf("%d\n", cnt);
	}
	return 0;
}
