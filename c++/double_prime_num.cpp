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
		int n;
		cin >> n;
		int check = 1;
		for(int i = 1; i <= n / 2; i++){
			if(prime(i) && prime(n-i)){
				cout << i << " " << n-i << endl;
				check = 0;
				break;
			}
		}
		if(check) cout << endl;
	}
	return 0;
}
