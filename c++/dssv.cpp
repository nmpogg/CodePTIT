#include <bits/stdc++.h>
using namespace std;
class SinhVien;
/*
2 
ngUYen Van NaM
D20DCCN01-B
2/12/2002
2.17
Nguyen QuanG hAi
D20DCCN02-B
1/9/2002
3.0
*/

class SinhVien{
	public:
		string id, name, lop, ns;
		double gpa;
		friend istream& operator >> (istream& in, SinhVien &a);
		friend ostream& operator << (ostream& out, SinhVien a);
};

int cnt = 0;

void chuanhoaName(string &s){
	stringstream ss(s);
	string res = "", token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.size(); i++) res += tolower(token[i]);
		res += " ";
	}
	res.erase(s.size(), 1);
	s = res;
}

void chuanhoaNS(string &s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}
istream& operator >> (istream& in, SinhVien &a){
	cnt++;
	if(cnt < 10) a.id = "B20DCCN00" + to_string(cnt);
	else a.id = "B20DCCN0" + to_string(cnt);
	scanf("\n");
	getline(cin, a.name);
	chuanhoaName(a.name);
	cin >> a.lop >> a.ns;
	chuanhoaNS(a.ns);
	cin >> a.gpa;
	return in;
}
	
ostream& operator << (ostream& out, SinhVien a){
	out << a.id << " " << a.name << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++) cin >> ds[i];
	sort(ds, ds+n, cmp);
	for(int i = 0; i < n; i++) cout << ds[i];
	return 0;
}
