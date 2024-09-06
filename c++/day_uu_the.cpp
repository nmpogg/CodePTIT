#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	cin.ignore();
	while(n--){
		string s;
		getline(cin, s);
		stringstream ss(s);
		string temp;
		int count = 0, c = 0, l = 0;
		while(ss >> temp){
			count++;
			if(stoi(temp) % 2 == 0) c++;
			else l++;
		}
		if(count % 2 == 0 && (c > l)) cout << "YES" << endl;
		else if(count % 2 == 1 && (l > c)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
} 
