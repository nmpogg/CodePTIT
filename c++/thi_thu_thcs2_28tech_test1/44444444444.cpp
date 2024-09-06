#include <bits/stdc++.h>
using namespace std;

int check(int n){
	int n1 = n;
	int res = 0;
	while( n > 0){
		res = res * 10 + n % 10;
		n /= 10;
	}
	if(n1 == res) return 1;
	return 0;
}

int main(){
	int n;
	unordered_map<int, int> mp;
	while(cin >> n){
		if(check(n)) mp[n]++;
	}
	for(auto it : mp){
		cout << it.first << " " << it.second << endl;
	}
}