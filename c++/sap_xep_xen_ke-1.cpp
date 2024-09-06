#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a, a + n);
		vector<int> min;
		vector<int> max;
		for(int i = 0; i < n / 2; i++){
			min.push_back(a[i]);
			a[i] = 0;
		} 
		for(int i = n-1; i >= 0; i--){
			if(a[i]) max.push_back(a[i]);
		}
		int cnt1 = 0, cnt2 = 0;
		for(int i = 1; i <= n; i++){
			if(i % 2 == 1) cout << max[cnt1++] << " ";
			else cout << min[cnt2++] << " ";
		}
		cout << endl;
	}
	return 0;
}
