#include <bits/stdc++.h>
using namespace std;

int main(){
	fstream data("DATA1.in", ios::in);
	int n, m;
	vector<int> a, b, giao;
	data >> n >> m;
	unordered_set<int> b1;
	int res;
	for(int i = 0; i < n; i++){
		data >> res;
		a.push_back(res);
	} 
	for(int i = 0; i < m; i++){
		data >> res;
		b.push_back(res);
		b1.insert(res);
	}
	data.close();
	
	for(int i = 0; i < n; i++){
		if(b1.find(a[i])!= b1.end()){
			giao.push_back(a[i]);
		}
	}
	for(auto it : giao) cout << it << " ";
	return 0;
}
