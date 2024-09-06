#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(getline(ss, tmp, '.')){
		v.push_back(tmp);
	}
	for(int i = v.size()-1; i >= 0; i--){
		cout << v[i];
		if(i != 0) cout << ".";
	}
	return 0;
}
