#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string name, ns, dc;
	double gpa;
};


void nhap(SinhVien &a){
	getline(cin, a.name);
	getline(cin, a.ns);
	getline(cin, a.dc);
	cin >> a.gpa;
	cin.ignore();
}

bool check(string s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
	if(s[4] == '4') return true;
	return false;
}

void in(SinhVien a){
	cout << a.name << " " << a.ns << " " << a.dc << " " << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
	int n;
	cin >> n;
	cin.ignore();
	SinhVien ds[n];
	for(int i = 0; i < n; i++){
		nhap(ds[i]);
	}
	for(int i = 0; i < n; i++){
		if(check(ds[i].ns)) in(ds[i]);
	}
}