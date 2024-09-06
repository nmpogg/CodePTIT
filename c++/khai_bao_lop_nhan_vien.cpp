#include <bits/stdc++.h>
using namespace std;
/*
Nguyen Van Hoa
Nam
11/22/1982
Mo Lao-Ha Dong-Ha Noi
8333123456
31/12/2013
*/

class NhanVien{
	private:
		string id, ten, sex, ns, dc, mst, hd;
	public:
		friend istream& operator >> (istream &in, NhanVien &a);
		friend ostream& operator >> (ostream &out, NhanVien a);	
};

istream& operator >> (istream &in, NhanVien &a){
	a.id = "00001";
	getline(in, a.ten);
	in >> a.sex >> a.ns;
	in.ignore();
	getline(in, a.dc);
	in >> a.mst >> a.hd;
	return in;
}

ostream& operator >> (ostream &out, NhanVien a){
	out << a.id << " " << a.ten << " "  << a.sex << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd;
	return out;
}

int main(){
    NhanVien a;
    cin >> a;
    cout >> a;
    return 0;
}
