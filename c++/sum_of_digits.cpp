#include <bits/stdc++.h>

using namespace std;

int sum(int n){
	int count = 0;
	while(n > 0){
		count += n % 10;
		n /= 10;
	}
	if(count < 10) return count;
	return sum(count);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << sum(n) << endl;
	}
	return 0;
}
