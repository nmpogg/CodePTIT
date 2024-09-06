#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv, name, sex, date, address, mst, contract_date;
};

void nhap(NhanVien& a){
	a.mnv = "00001";
	getline(cin, a.name);
	cin >> a.sex;
	cin.ignore();
	cin >> a.date;
	cin.ignore();
	getline(cin, a.address);
	getline(cin, a.mst);
	getline(cin, a.contract_date);
}

void in(NhanVien a){
	cout << a.mnv << " " << a.name << " " << a.sex << " " << a.date << " " << a.address << " " << a.mst << " " << a.contract_date;
}

int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
