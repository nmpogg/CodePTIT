#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
} 

int main(){
	int t;
	cin >> t;
	int cnt = 0;
	long long perfect[8] = {0};
	for(int p = 2; p < 1000; p++){
			if(p == 11) continue;
			if(prime(pow(2, p) - 1)){
				perfect[cnt] = pow(2, p - 1) * (pow(2, p) - 1);
				cnt++;
			}
	}
//	for(int i = 0; i < 8; i++) cout << perfect[i] << " ";
	while(t--){
		long long n; 
		cin >> n;
		int check = 0;
		for(int i = 0; i < 8; i++){
			if(n == perfect[i]){
				check = 1;
			}
		}
		if(check) cout << 1;
		else cout << 0;
		cout << endl;
	}
	return 0;
}
