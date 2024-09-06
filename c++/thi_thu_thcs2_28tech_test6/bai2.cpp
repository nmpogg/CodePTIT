#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieve(){
	for(int i = 0; i <= 1000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++){
		for(int j = i * i; j <= 1000000; j += i){
			if(prime[j]) prime[j] = 0;
		}
	}
}

int main(){
	sieve();
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	int q;
	cin >> q;
	while(q--){
		int x, y;
		cin >> x >> y;
		int ans = 0;
		for(int i = x; i <= y; i++){
			if(prime[a[i]]) ans++;
		}
		cout << ans << endl;
	}
}