#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		int k;
		cin >> s >> k;
		int ans = 0;
		for(int i = 0; i < s.size(); i++){
			// xet tat ca cac xau con bat dau tu vi tri 1 tromg xau s
			int cnt[256];
			memset(cnt, 0, sizeof(cnt));
			int count = 0;
			for(int j = i; j < s.size(); j++){
				if(cnt[s[j]] == 0){
					count++;
				}
				if(count == k) ans++;			
				if(count > k) break;//vi so luong ki tu lon hon roi, thi phia sau chac chan cung lon hon k
				cnt[s[j]] = 1;
			}			
		}
		cout << ans << endl;
	}
	return 0;
}
