#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, k;
	cin >> n>> k;
	int a[n];
	map <int, int> mp;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	int cnt = 0;
	for(int i = 0; i < n; i++){
		cnt += mp[k - a[i]];
		if(a[i] * 2 == k) cnt--;
	}
	cout << cnt << endl;
}

//1 2 2 3 4
