#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	for(int i = 0; i < n; i++) mp[a[0][i]] = 1;
	for(int i = 1; i < n; i++){
		for(auto it : mp){
			for(int j = 0; j < n; j++){
				if(it.first == a[i][j] && it.second == i){
					mp[it.first]++;
					break;
				}				
			}
		}
	}
	bool flag = false;
	for(auto it : mp){
		if(it.second == n){
			flag = true;
			cout << it.first << " ";
		}
	}
	if(!flag) cout << "NOT FOUND";
}