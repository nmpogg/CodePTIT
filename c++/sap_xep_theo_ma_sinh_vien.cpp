#include <bits/stdc++.h>
using namespace std;
/*
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
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/

class SinhVien{
	public:
		string id, ten, lop, email;
	public:
		friend istream& operator >> (istream &in, SinhVien &a){
			in >> a.id;
			cin.ignore();
			getline(in, a.ten);
			cin >> a.lop >> a.email;
			return in;
		}
		void in();
};

bool cmp(SinhVien a, SinhVien b){
	return a.id < b.id;
}

void SinhVien::in(){
	cout << id << " " << ten << " " << lop << " " << email << endl;
}

int main(){
	SinhVien ds[1000];
	int cnt = 0;
	while(cin >> ds[cnt]){
		cnt++;
	}
	sort(ds,ds+cnt,cmp);
	for(int i = 0; i < cnt; i++) ds[i].in();
	return 0;
}
