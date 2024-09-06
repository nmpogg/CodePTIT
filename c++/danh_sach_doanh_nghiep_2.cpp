#include <bits/stdc++.h>
using namespace std;

/*
4
VIETTEL
TAP DOAN VIEN THONG QUAN DOI VIETTEL
40
FSOFT
CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
300
VNPT
TAP DOAN BUU CHINH VIEN THONG VIET NAM
200
SUN
SUN*
50
1
30 50
*/

class DoanhNghiep{
	public:
		string id, ten;
		int num;
		void nhap();
		void in();
};

void DoanhNghiep::nhap(){
	cin >> id;
	scanf("\n");
	getline(cin, ten);
	cin >> num;
}

void DoanhNghiep::in(){
	cout << id << " " << ten << " " << num << endl;
}

bool cmp(DoanhNghiep a, DoanhNghiep b){
	if(a.num != b.num) return a.num > b.num;
	else return a.id < b.id;
}

int main(){
	int n;
	cin >> n;
	DoanhNghiep ds[n];
	for(int i = 0; i < n; i++) ds[i].nhap();
	sort(ds, ds+n, cmp);
	int q;
	cin >> q;
	while(q--){
		int a, b;
		cin >> a >> b;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:\n";
		for(int i = 0; i < n; i++){
			if(ds[i].num >= a && ds[i].num <= b) ds[i].in();
		}
	}
	return 0;
}
