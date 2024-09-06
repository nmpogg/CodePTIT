#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	set <string> s;
	for(int i = 1; i <= n; i++){
		string str; 
		getline(cin, str);
		s.insert(str);
	}
	cout << s.size() << endl;
	return 0;
}
