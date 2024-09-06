#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	private:
		string id, ten, lop, ns;
		double gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien& a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

void chuanhoaNS(string &s){
	if(s[1] == '/') s.insert(0, "0");
	if(s[4] == '/') s.insert(3, "0");
}

void chuanhoaTEN(string &s){
	string res = "";
	stringstream ss(s);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.length(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.length() - 1);
	s = res;
}

istream& operator >> (istream &in, SinhVien& a){
	a.id = "B20DCCN001";
	getline(in, a.ten);
	chuanhoaTEN(a.ten);
	in >> a.lop;
	in >> a.ns;
	chuanhoaNS(a.ns);
	in >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.id << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
