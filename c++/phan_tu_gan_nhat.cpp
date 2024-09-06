#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int& x : a) cin >> x;
		int k, x;
		cin >> k >> x;
		int res;
		for(int i = 0; i < n; i++){
			if(a[i] == x){
				res = i;
				break;
			}
		}
		for(int i = res - k/2; i <= res + k/2; i++){
			if(i != res){
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
