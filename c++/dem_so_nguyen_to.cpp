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
		int l, r;
		cin >> l >> r;
		int count = 0;
		for(int i = l; i <= r; i++){
			if(prime(i)) count++;
		}
		cout << count << endl;
	}
	return 0;
}
