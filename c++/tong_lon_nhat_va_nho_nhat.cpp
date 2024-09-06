#include <bits/stdc++.h>
using namespace std;

long long max(long long n){
	string res = to_string(n);
	for(int i = 0; i < res.size(); i++){
		if(res[i] == '5') res[i] = '6';
	}
	n = stoll(res);
	return n;
}

long long min(long long n){
	string res = to_string(n);
	for(int i = 0; i < res.size(); i++){
		if(res[i] == '6') res[i] = '5';
	}
	n = stoll(res);
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long x1, x2;
		cin >> x1 >> x2;
		cout << min(x1) + min(x2) << " " << max(x1) + max(x2) << endl;
	}
	return 0;
} 
