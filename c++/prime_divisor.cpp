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
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				while(n % i == 0){
					cout << i << " ";
					n /= i;
				}
			}
		}
		if(n > 1) cout << n;
		cout << endl;
	}
	return 0;
}
