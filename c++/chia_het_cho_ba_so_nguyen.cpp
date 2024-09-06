#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long bcn(int a, int b){
	return a * b / gcd(a, b);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		int x, y, z, n;
		cin >> x >> y >> z >> n;
		long long res = bcn(x, bcn(y,z));
		long long tmp = pow(10, n-1), tmp2 = pow(10, n);
		if(res >= tmp2) cout << -1 << endl;
		else if(res < tmp2 && res >= tmp) cout << res << endl;
		else{
			cout << res * ((tmp / res) + 1) << endl;
		}
	}
	return 0;
}
