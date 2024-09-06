#include <bits/stdc++.h>

using namespace std;

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
		int n, check = 0;
		cin >> n;
		for(int i = 0; i <= n / 2; i++){
			if(prime(i) && prime(n - i)){
				cout << i << " " << n - i << endl;
				check = 1;
				break;
			}
		}
		if(!check) cout << -1 << endl;
	}
	return 0;
}
