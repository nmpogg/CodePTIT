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

void chuanhoa(string &s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

istream& operator >> (istream &in, SinhVien& a){
	a.id = "B20DCCN001";
	getline(in, a.ten);
	in >> a.lop >> a.ns;
	chuanhoa(a.ns);
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
