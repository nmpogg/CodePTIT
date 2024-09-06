#include <bits/stdc++.h>

using namespace std;

int gcd(long long a, long long b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		cout << a * b / gcd(a, b) << " " << gcd(a, b) << endl;
	}
	return 0;
}

