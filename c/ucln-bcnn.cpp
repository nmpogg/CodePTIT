#include <stdio.h>

int UCLN(long long a, long long b){
	while(a != b){
		if(a > b) a -= b;
		else b -= a;
	}
	return b;// a hay b deu duoc vi a = b
}

int main(){
	long long a, b;
	scanf("%lld %lld", &a, &b);
	long long ucln = UCLN(a, b);
	long long bcnn = a * b / ucln;
	printf("%lld\n%lld", ucln, bcnn);
	return 0;
} 
