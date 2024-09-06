#include <stdio.h>
#include <math.h>

int terminal_check(long long n){
	int last_number = n % 10;
	int first_number;
	while(n > 0){
		first_number = n % 10;
		n /= 10;
	}
	if(first_number ==  2 * last_number || last_number == 2 * first_number) return 1;
	else return 0; 
}

int check_stn(long long n){
	long long digit, n1 = n,digit2, n2 = n, cnt = 0;
	while(n1 > 0){
		digit2 = n1 % 10;
		cnt++;
		n1 /= 10;
	}
	long long n3 = (n2 - digit2 * pow(10, cnt-1) ) / 10;
	long long stn = 0;
	n /= 10;	
	while(n > 9){
		digit = n % 10;
		stn = stn * 10 + digit;
		n /= 10;
	}
	if(stn == n3) return 1;
	else return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(terminal_check(n) && check_stn(n)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
