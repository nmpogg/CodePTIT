#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string msv, hoten, lop;
	double diem1, diem2, diem3;
};

bool ss(SinhVien a, SinhVien b){
	return a.hoten < b.hoten;
}

void nhapds(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		cin.ignore();
		getline(cin, ds[i].msv);
		getline(cin, ds[i].hoten);
		getline(cin, ds[i].lop);
		cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3;
	}
}
void sx(SinhVien ds[], int& n){
	sort(ds, ds+n, ss);
}

void in(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		cout << i+1 << " " << ds[i].msv << " " << ds[i].hoten << " " << ds[i].lop << " " << fixed << setprecision(1) << ds[i].diem1 << " " << ds[i].diem2 << " " << ds[i].diem3 << endl;
 	}
}

int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	nhapds(ds, n);
	sx(ds, n);
	in(ds, n);
	return 0;
}