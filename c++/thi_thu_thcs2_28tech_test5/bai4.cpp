#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	vector<int> a[n+1];
	for(int i = 1; i <= n; i++){
		string res;
		getline(cin, res);
		stringstream ss(res);
		while(ss >> res){
			a[i].push_back(stoi(res));
		}
	}
	int q;
	cin >> q;
	while(q--){
		int i, j;
		cin >> i >> j;
		cout << a[i][j] << endl;
	}
}