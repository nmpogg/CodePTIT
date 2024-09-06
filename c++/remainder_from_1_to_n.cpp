#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n, k;
		cin >> n >> k;
		double temp = (double)k * (k - 1) / 2 * (n / k) + ((n % k) * (n % k + 1) / 2);
		if(temp == k) cout << 1 << endl;
		else cout << 0 << endl;		
	}
	return 0;
}
