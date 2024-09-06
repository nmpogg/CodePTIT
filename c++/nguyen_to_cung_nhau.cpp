#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

bool prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return n > 1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int x;
		cin >> x;
		int cnt = 0;
		for(int i = 1; i <= x; i++){
			if(gcd(x, i) == 1) cnt++;
		}
		if(prime(cnt)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
