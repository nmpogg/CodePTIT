#include <bits/stdc++.h>
using namespace std;
long long fibo[100];
void fibonacci(){
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i < 93; i++){
		fibo[i] = fibo[i-2] + fibo[i-1];
	}
}

int main(){
	int t;
	cin >> t;
	fibonacci();
	while(t--){
		long long n;
		cin >> n;
		int check = 1;
		for(int i = 0; i < 93; i++){
			if(n == fibo[i]){
				cout << "YES" << endl;
				check = 0;
				break;	
			}
		}
		if(check) cout << "NO" << endl;
	}
	return 0;
}
