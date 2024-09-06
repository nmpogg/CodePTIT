#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	int cnt[10] = {0};
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '7') cnt[7]++;
		else if(s[i] == '5') cnt[5]++;
		else if(s[i] == '3') cnt[3]++;
		else if(s[i] == '2') cnt[2]++;
	}
	for(int i = 0; i < s.size(); i++){
		if(cnt[s[i] - '0'] != 0){
			cout << s[i] << " " << cnt[s[i] - '0'] << endl;
			cnt[s[i] - '0'] = 0;
		}
	}
}