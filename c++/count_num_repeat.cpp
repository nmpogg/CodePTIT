#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n], b[100005] = {0};
		for(int i = 0; i < n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(b[a[i]] > 1){
				cnt += b[a[i]];
				b[a[i]] = 0;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
