#include <bits/stdc++.h>
using namespace std;

struct word{
	string data;
	int fre;
};

bool cmp(word a, word b){
	if(a.fre != b.fre) return a.fre > b.fre;
	return a.data < b.data;
}

int main(){
	word ds[4];
	ds[0].data = "good";
	ds[1].data = "bad";
	ds[2].data = "wonderful";
	ds[3].data = "terrible";
	for(int i = 0; i < 4; i++){
		ds[i].fre = 0;
	}
	string s;
	while(cin >> s){
		for(int i = 0; i < 4; i++){
			if(s == ds[i].data) ds[i].fre++;
		}
	}
	sort(ds, ds+4, cmp);
	for(int i = 0; i < 4; i++){
		if(ds[i].fre)
			cout << ds[i].data << " " << ds[i].fre << endl;
	}
}