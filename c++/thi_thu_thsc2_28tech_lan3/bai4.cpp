#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return 0;
	}
	return n > 1;
}

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	
	int tren = 0, duoi = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i < j && prime(a[i][j])) duoi++;
			else if (i > j && prime(a[i][j])) tren++;
		}
	}
	if(duoi > tren) cout << "28tech";
	else if(duoi < tren) cout << "29tech";
	else cout << "30tech";
}