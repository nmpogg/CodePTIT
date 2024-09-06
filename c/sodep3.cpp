#include <stdio.h>

int beauty_num(long long n){
	int digit, cnt6 = 0, sum = 0;
	long long stn = 0, n1 = n;
	while(n > 0){
		digit = n % 10;
		if(digit == 6) cnt6++;
		sum += digit; 
		stn = stn * 10 + digit;
		n /= 10;
	}
	if(cnt6 > 0 && sum % 10 == 8 && stn == n1) return 1;
	else return 0;	
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	if( a > b){
		long long temp = a;
		a = b; 
		b = temp;
	}
	int cnt = 0;
	for(long long i = a; i <= b; i++){
		if(beauty_num(i)) printf("%lld ", i);
	}
	return 0;
}


