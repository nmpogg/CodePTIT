#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set <int> s;
		int cnt[1000000] = {0}, count = 0;
		for(int i = 0; i < n; i++){
			int x; cin >> x;
			s.insert(x);
			cnt[x] = 1;
		}
		for(int i = *s.begin(); i <= *s.rbegin(); i++){
			if(cnt[i] == 0) count++;
		}
		cout << count << endl;
	}
	return 0;
}
