#include <bits/stdc++.h>
using namespace std;

int main(){
	fstream data("VANBAN.in", ios::in);
	string str;
	set<string> se;
	while(data >> str){
		for(int i = 0; i < str.size(); i++) str[i] = tolower(str[i]);
		se.insert(str);
	}
	data.close();
	
	for(auto it : se) cout << it << endl;
	return 0;
}
