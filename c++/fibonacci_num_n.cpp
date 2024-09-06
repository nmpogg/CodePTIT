#include <bits/stdc++.h>

using namespace std;

long long fibo[95];
void fibonacci(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 93; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}

int main(){
	int t;
	cin >> t;
	fibonacci();
	while(t--){
		int n;
		cin >> n;
		cout << fibo[n] << endl;
	}
	return 0;
}

