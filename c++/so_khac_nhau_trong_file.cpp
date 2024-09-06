#include <bits/stdc++.h>
using namespace std;

int main(){
	fstream data("DATA.in", ios::in);
	int n;
	map<int, int> mp;
	while(data >> n){
		mp[n]++;
	}
	data.close();
	for(auto it : mp) cout << it.first << " " << it.second << endl;
	return 0;
}

