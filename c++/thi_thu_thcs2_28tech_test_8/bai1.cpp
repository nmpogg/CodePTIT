#include <bits/stdc++.h>
using namespace std;

bool check(long long n){
	long long res = sqrt(n);
	if(res * res == n) return true;
	return false;
}

int main(){
	long long a ,b;
	cin >> a >> b;
	for(long long i = sqrt(a); i <= sqrt(b); i++){
		if(i * i < a) continue;
		cout << i*i << " ";
	}
}