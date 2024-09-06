#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char a[n];
	for(char &x : a) cin >> x;
	int cnt = 0;
	for(char c : a){
		if(c == '2' && cnt == 0) cnt++;
		if(c == '8' && cnt == 1) cnt++;
		if(c == 't' && cnt == 2) cnt++;
		if(c == 'e' && cnt == 3) cnt++;
		if(c == 'c' && cnt == 4) cnt++;
		if(c == 'h' && cnt == 5) cnt++;
	}
	if(cnt == 6) cout << "28TECH";
	else cout << "HCET82";
}