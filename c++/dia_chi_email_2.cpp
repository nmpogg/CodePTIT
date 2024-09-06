#include <bits/stdc++.h>
using namespace std;
/*
4
    nGUYEn    quaNG   vInH  
   tRan   thi THU    huOnG
   nGO   quoC  VINH
 lE            tuAn    aNH
 */
int main(){
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--){
		string s;
		getline(cin , s);
		for(int i = 0; i < s.size(); i++) s[i] = tolower(s[i]);
		stringstream ss(s);
		string temp, res = "";
		int count = 0;
		vector<string> v;
		while(ss >> temp){
			v.push_back(temp);
		}
		res += v[v.size() - 1];
		for(int i = 0; i < v.size() - 1; i++){
			res += v[i][0];
		}
		if(mp[res] == 0){
			cout << res << "@ptit.edu.vn" << endl;
		}
		else{
			cout << res << mp[res] + 1 << "@ptit.edu.vn" << endl;
		}
		mp[res]++;
	}
	return 0;
}
