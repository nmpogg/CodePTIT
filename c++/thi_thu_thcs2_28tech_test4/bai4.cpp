#include <bits/stdc++.h>
using namespace std;

string res = "28tech";  

int check(char c){
	for(char x : res){
		if(c == x) return 1;
	}
	return 0;
}

int ktra(map<char, int> mp){
	for(char c : res){
		if(mp[c] == 0) return 0;
	}
	return 1;
}

int main(){
	int n;
	cin >> n;
	char a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			if(isalpha(a[i][j])) a[i][j] = tolower(a[i][j]);
		}
	}
	for(int i = 0; i < n-2; i++){
		for(int j = 0; j < n-2; j++){
			map<char, int> mp;
			for(int h = i; h < i+3; h++){
				for(int c = j; c < j+3; c++){
					if(check(a[h][c])) mp[a[h][c]]++;
				}
			}
			if(ktra(mp)){
				cout << res;
				return 0;
			}
		}
	}
	cout << "29tech";
}