#include <bits/stdc++.h>

using namespace std;

bool check(long long n){
	int sau = n % 10;
	n /= 10;
	while(n > 0){
		int truoc = sau;
		sau = n % 10;
		if(abs(truoc - sau) != 1) return false;
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
