#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve(){
	for(int i = 0; i <= 1000000; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		for(int j = i * i; j <= 1000000; j += i){
			if(prime[j]) prime[j] = 0;
		}
	}
}

bool check(int n){
	string res = to_string(n);
	int len = res.size();
	int tmp = pow(10, len/2);
	int n1 = n % tmp;
	n /= tmp;
	if(len % 2 == 1) n /= 10;
	return prime[n1 + n] == 1;
}

int main(){
	sieve();
	int k;
	cin >> k;
	for(int i = 1; i < k; i++){
		if(check(i)) cout << i << " ";
	}
}