#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin >> n;
	set<int> se;
	for(int i = 0; i < n; i++){
		int x; cin >> x;
		se.insert(x);
	}
	int cnt = 1;
	for(auto it : se){
		if(it == 0) continue;
		if(it != cnt){
			cout << cnt;
			return 0;
		}
		cnt++;
	}
	cout << cnt;
}
