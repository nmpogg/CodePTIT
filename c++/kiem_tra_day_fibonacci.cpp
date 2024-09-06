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
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < 20; j++){
				if(a[i] == fibo[j]){
					cout << a[i] << " ";
					break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
