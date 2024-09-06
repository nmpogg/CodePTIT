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
	for(int i = 0; i < n; i++) ds[i].in();
	return 0;
}
