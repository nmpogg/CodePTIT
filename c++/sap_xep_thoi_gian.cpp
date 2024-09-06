#include <bits/stdc++.h>
using namespace std;

struct thoigian{
	int gio, phut, giay;
};

void nhap(thoigian ds[], int& n){
	for(int i  = 0; i < n; i++){
		cin >> ds[i].gio >> ds[i].phut >> ds[i].giay;
	}
}

bool cmp(thoigian a, thoigian b){
	if(a.gio < b.gio) return 0;
	if(a.gio > b.gio) return 1;
	if(a.phut < b.phut) return 0;
	if(a.phut > b.phut) return 1;
	if(a.giay > b.giay) return 1;
	return 0;
}

void sapxep(thoigian ds[], int& n){
	sort(ds, ds+n, cmp);
}

void in(thoigian ds[], int n){
	for(int i = n-1; i >= 0; i--){
		cout << ds[i].gio << " " << ds[i].phut << " " << ds[i].giay << endl;
	}
}

int main(){
	int n;
	cin >> n;
	thoigian ds[n];
	nhap(ds, n);
	sapxep(ds, n);
	in(ds, n);
	return 0;
}