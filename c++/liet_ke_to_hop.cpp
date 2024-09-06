#include <bits/stdc++.h>
using namespace std;

int X[22];
int n, k;

void results(){
	for(int i = 1; i <= k; i++){
		cout << X[i];
	}
	cout << " ";
}

void Try(int i){
	for(int j = X[i-1]+1; j <= n-k+i; j++){
		X[i] = j;
		if(i == k){
			results();
		}
		else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		Try(1);
		cout << endl;
	}
}
