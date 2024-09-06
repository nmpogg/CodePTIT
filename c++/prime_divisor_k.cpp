#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int i = 2;
		while(n > 1){			
			if(n % i == 0){
				while(n % i == 0){
					k--;
					if(k == 0){
						cout << i;
						break;
					}
					n /= i;
				}
			}
			else i++;
			if(k == 0) break;
		}
		if(k > 0) cout << -1;
		cout << endl;
	}
	return 0;
}
