#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		if(prime[i]){
			for(int j = i*i; j < 1000001; j+=i){
				prime[j] = 0;
			}
		}
	}
} 

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		long long l, r, count = 0;
		cin >> l >> r;
		int pog = sqrt(r);
		for(int i = 0; i <= pog; i++){
			if(prime[i]) ++count;
		}
		cout << count << endl;
	}
	return 0;
}
