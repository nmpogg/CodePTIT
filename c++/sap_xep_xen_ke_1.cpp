#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n);
		int cnt = 1;
		for(int i = 0; i < n; i++){
			b[cnt++] = a[i];
			cnt += 2;
		}
		cnt = 0;
		for(int i = n-1; i >= 0; i--){
			b[cnt] = a[i];
			cnt += 2;
		}
		for(int x : b){
			cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
