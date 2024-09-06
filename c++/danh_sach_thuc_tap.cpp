#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	int stt;
	string msv, hoten, lop, email, doanhnghiep;
};

void nhapds(SinhVien ds[], int& n){
	for(int i = 0; i < n; i++){
		ds[i].stt = i+1;
		scanf("\n");
		getline(cin, ds[i].msv);
		getline(cin, ds[i].hoten);	
		getline(cin, ds[i].lop);
		getline(cin, ds[i].email);
		getline(cin, ds[i].doanhnghiep);
	}
}

bool ss(SinhVien a, SinhVien b){
	return a.hoten < b.hoten;
}

void sapxep(SinhVien ds[], int& n){
	sort(ds, ds+n, ss);
}

void inds(SinhVien ds[], int n, string str){
	for(int i = 0; i < n; i++){
		if(str == ds[i].doanhnghiep){
			cout << ds[i].stt << " " << ds[i].msv << " " << ds[i].hoten << " " << ds[i].lop << " " << ds[i].email << " " << ds[i].doanhnghiep << endl;
		}
	}
}

int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	nhapds(ds, n);
	sapxep(ds, n);
	int q;
	cin >> q;
	while(q--){
		string str;
		cin >> str;
		inds(ds, n, str);
	}
	return 0;
}