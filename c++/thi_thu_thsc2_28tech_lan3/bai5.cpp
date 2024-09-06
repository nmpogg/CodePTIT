#include <bits/stdc++.h>
using namespace std;

struct web{
	string date, time, dc;
};
map<string, int> ts;

bool cmp(web a, web b){
	if(ts[a.dc] != ts[b.dc]) return ts[a.dc] > ts[b.dc];
	else return a.dc < b.dc;
}

int main(){
	vector<web> ans;
	web a;
	while(cin >> a.date >> a.time >> a.dc){
		ans.push_back(a);
		ts[a.dc]++;
	}
	sort(begin(ans), end(ans), cmp);
	for(auto it : ans){
		if(ts[it.dc]){
			cout << it.dc << " " << ts[it.dc] << endl;
			ts[it.dc] = 0;
 		}
	}
}