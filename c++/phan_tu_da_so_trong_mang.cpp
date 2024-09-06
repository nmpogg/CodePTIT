#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	map<int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	double res = (double)n / 2;
	bool check = false;
	for(auto it : mp){
		if(it.second > res){
			check = true;
			cout << it.first << " ";
		}
	}
	if(!check) cout << -1;
	return 0;
}
