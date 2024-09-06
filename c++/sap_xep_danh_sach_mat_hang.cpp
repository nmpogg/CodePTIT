#include <bits/stdc++.h>
using namespace std;

struct mathang{
	int ma;
	string ten, nhom;
	double giamua, giaban, loinhuan;
	
	bool operator > (const mathang other){
		return loinhuan > other.loinhuan;
	}
};
bool ss(mathang a, mathang b){
	return a > b;
}

void nhap(mathang a[], int& n){
	for(int i = 1; i <= n; i++){
		a[i].ma = i;
		cin.ignore();
		getline(cin, a[i].ten);
		getline(cin, a[i].nhom);
		cin >> a[i].giamua >> a[i].giaban;
		a[i].loinhuan = a[i].giaban - a[i].giamua;
	}
}

void in(mathang a[], int n){
	for(int i = 1; i <= n; i++){
		cout << a[i].ma << " " << a[i].ten << " " << a[i].nhom << " " << fixed << setprecision(2) << a[i].loinhuan << endl;
	}
}
/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/
int main(){
	int n;
	cin >> n;
	mathang a[n+1];
	nhap(a, n);
	sort(a+1, a+n+1, ss);
	in(a, n);
	return 0;
}
