#include <bits/stdc++.h>
using namespace std;

int main(){
	fstream data1("DATA1.in", ios::in);
	fstream data2("DATA2.in", ios::in);
	string s;
	vector<string> dta1, dta2;
	set<string> hop, giao, dta11;
	while(data1 >> s){
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		dta1.push_back(s);
		dta11.insert(s);
		hop.insert(s);
	}
	while(data2 >> s){
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		dta2.push_back(s);
		hop.insert(s);
	}
	data1.close();
	data2.close();
	
	for(int i = 0; i < dta2.size(); i++){
		if(dta11.find(dta2[i]) != dta11.end()){
			giao.insert(dta2[i]);
		}
	}
	for(auto it : hop) cout << it << " ";
	cout << endl;
	for(auto it : giao) cout << it << " ";
	return 0;
}
