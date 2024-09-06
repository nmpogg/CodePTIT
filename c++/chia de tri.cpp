#include<bits/stdc++.h>
using namespace std;

long long pow1(long long a, long long b){
	if (b == 0) return 1;
	if (b == 1) return a;
	long long c = pow1(a, b/2);
	if (b % 2 == 1) return c * c * a;
	else return c*c;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int x, y, p;
		cin >> x >> y >> p;
		cout << pow1(x, y) % p << endl;
	}
	return 0;
}
