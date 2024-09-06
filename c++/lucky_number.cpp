#include <bits/stdc++.h>

using namespace std;

bool check(int n){
	return n % 100 == 86;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(check(n)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}
