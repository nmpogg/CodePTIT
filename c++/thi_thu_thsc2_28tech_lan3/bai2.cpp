#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int &x : a) cin >> x;
	sort(a, a+n);
	int minx = 1e9;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] < minx) minx = a[i] - a[i-1];
	}
	int cnt = 0;
	for(int i = 1; i < n; i++){
		if(a[i] - a[i-1] == minx) cnt++;
	}
	cout << minx << "\n" << cnt;
} 