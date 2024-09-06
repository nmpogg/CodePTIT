#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	while(n > 0){
		int digit = n % 10;
		if(digit != 0 && digit != 6 && digit != 8) return false;
		n /= 10;
	}
	return true;
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
