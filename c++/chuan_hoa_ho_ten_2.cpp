#include <bits/stdc++.h>
using namespace std;

void fix(string& a){
	a[0] = toupper(a[0]);
	for(int i = 1; i < a.size(); i++){
		a[i] = tolower(a[i]);
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int i;
		cin >> i;
		cin.ignore();
		string s;
		getline(cin, s);
		stringstream ss(s);
		string temp;
		vector<string> v;
		while(ss >> temp){
			fix(temp);
			v.push_back(temp);
		}
		if(i == 1){
			cout << v[v.size()-1] << " ";
			for(int j = 0; j < v.size()-1; j++) cout << v[j] << " ";
			cout << endl;
		}
		else{
			for(int j = 1; j < v.size(); j++) cout << v[j] << " ";
			cout << v[0] << endl;
		}
	}
	return 0;
}
