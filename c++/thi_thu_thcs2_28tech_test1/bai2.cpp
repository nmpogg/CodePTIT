#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	int idx1, idx2, max1 = 0, max2 = 0;
	for(int i = 0; i < n; i++){
		int cnt1 = 0;
		for(int j = 0; j < n; j++){
			if(prime(a[i][j])){
				cnt1++;
			}	
		}
		if(cnt1 >= max1){
			max1 = cnt1;
			idx1 = i;
		}
	}
	for(int i = 0; i < n; i++){
		int cnt2 = 0;
		for(int j = 0; j < n; j++){
			if(prime(a[j][i])){
				cnt2++;
			}
		}
		if(cnt2 >= max2){
			max2 = cnt2;
			idx2 = i;
		}
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != idx1 && j != idx2) cout << a[i][j] << " ";
		}
		cout << endl;
	}
}