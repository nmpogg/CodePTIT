#include <bits/stdc++.h>
using namespace std;
/*
3
Nguyen Van A
Nam
10/22/1982
Mo Lao-Ha Dong-Ha Noi
8333012345
31/12/2013
Ly Thi B
Nu
10/15/1988
Mo Lao-Ha Dong-Ha Noi
8333012346
22/08/2011
Hoang Thi C
Nu
04/02/1981
Mo Lao-Ha Dong-Ha Noi
8333012347
22/08/2011
*/

class NhanVien{
	public:
		string id, ten, sex, ns, dc, mst, hd;
	public:
		friend istream& operator >> (istream& in, NhanVien &a);
		friend ostream& operator << (ostream& out, NhanVien a);
};
int dem = 0;

istream& operator >> (istream& in, NhanVien &a){
	dem++;
	if(dem < 10) a.id = a.id + "0000" + to_string(dem);
	else a.id = a.id + "000" + to_string(dem);
	cin.ignore();
	getline(in, a.ten);
	in >> a.sex >> a.ns;
	cin.ignore();
	getline(in, a.dc);
	cin >> a.mst;
	cin >> a.hd;
	return in;
}

ostream& operator << (ostream& out, NhanVien a){
	out << a.id << " " << a.ten << " " << a.sex << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.hd << endl;
	return out;
}

int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
