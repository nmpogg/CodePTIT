#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				int check = 0;
				if(a[j] == i){
					a[i] = a[j];
					check = 1;
				}
				if(!check) a[i] = -1;
			}
		}
		for(int i = 0; i < n; i++){
			cout << a[i] << " ";
		}
	}
}
