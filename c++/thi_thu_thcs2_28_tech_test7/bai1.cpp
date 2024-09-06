#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin >> n;
	ll res = 1;
	while(1){
		ll tmp = sqrt(n * res);
		if(tmp * tmp == n * res){
			cout << n * res;
			break;
		}
		res++;
	}
}