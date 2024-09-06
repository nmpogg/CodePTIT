#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	long long res = 0, copy = n;
	while(n > 0){
		int digit = n % 10;
		res = res * 10 + digit;
		n /= 10;
	}
	if(copy == res) return true;
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(check(n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
