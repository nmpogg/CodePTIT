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
D15CQKT02-B
*/

class SinhVien{
	public:
		string id, ten, lop, email;
		void in();
		void nhap();
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
	int q; cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
		for(int i = 0; i < n; i++){
			if(ds[i].lop == s) ds[i].in();
		}
	}
	return 0;
}
