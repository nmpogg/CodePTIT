#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int& x : a) cin >> x;
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += a[i];
		}
		int sum2 = 0, idx = -1;
		for(int i = 0; i < n; i++){			
			sum -= a[i];
			if(sum == sum2){
				idx = i + 1;
				break;
			}
			sum2 += a[i];
		}
		cout << idx << endl;
	}
	return 0;
}
