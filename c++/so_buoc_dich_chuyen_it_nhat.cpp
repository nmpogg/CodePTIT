#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		bool check = false;
		int cnt = 0;
		for(int i = 0; i < n; i++){
			if(a[i] == 0){
				check = true;
				cnt = -1;
				break;
			}
//			cout << "b0" << endl;
			if(a[i] >= n - i - 1){
				check = true;
				cnt++;
//				cout << "b1"<< endl;
				break;
			}
			cnt++;
			a[i]--;
			int idx = i;
			while(a[idx]--){
				i++;
				if(a[i] >= n - i - 1){
					check = true;
					cnt++;
//					cout << "b2" << endl;
					break;
				}
			}
			if(check) break;
		}
		cout << cnt << endl;
	}
	return 0;
}
