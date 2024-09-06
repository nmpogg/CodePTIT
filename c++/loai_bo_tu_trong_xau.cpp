#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	getline(cin, str);
	string s;
	cin >> s;
	stringstream ss(str);
	string temp;
	while(ss >> temp){
		if(temp != s) cout << temp << " ";
	}
	return 0;
}
