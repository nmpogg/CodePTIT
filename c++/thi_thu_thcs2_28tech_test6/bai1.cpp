#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	map<int, int> mp;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				mp[i]++;
				n /= i;
			}
		}
	}
	if(n > 1) mp[n]++;
	for(auto it : mp){
		cout << it.first << " ";
	}
	cout << endl;
	string ans = "";
	for(auto it : mp){
		cout << "(" << it.first << ", " << it.second << ") ";
		while(it.second--){
			ans += to_string(it.first);
			ans += " x ";
		}
	}
	cout << endl;
	ans.erase(ans.size()-3, 3);
	cout << ans;
}