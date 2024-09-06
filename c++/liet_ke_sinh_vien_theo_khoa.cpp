#include <bits/stdc++.h>
using namespace std;
/*
4
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
1
2015
*/

class SinhVien{
	public:
		string id, ten, lop, email;
	public:
		void nhap();
		void in();
};

void SinhVien::nhap(){
	cin >> id;
	cin.ignore();
	getline(cin, ten);
	cin >> lop >> email;
}

void SinhVien::in(){
	cout << id << " " << ten << " " << lop << " " << email << endl;
}

int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++) ds[i].nhap();
	int q;
	cin >> q;
	while(q--){
		string str;
		cin >> str;
		cout << "DANH SACH SINH VIEN KHOA " << str << ":\n";
		str.erase(0, 2);
		for(int i = 0; i < n; i++){
			if(ds[i].lop[1] == str[0] && ds[i].lop[2] == str[1]) ds[i].in();
		}
	}
	return 0;
}
