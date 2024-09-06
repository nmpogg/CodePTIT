#include <bits/stdc++.h>
using namespace std;

struct sv{
	string ma;
	string name, hocluc;
	double diem[10];
	double tb;
	void nhap();
	void in();
};
int cnt = 1;

void sv::nhap(){
	scanf("\n");
	ma = "HS0" + to_string(cnt);
	cnt++;
	getline(cin , name);
	double sum = 0;
	for(int i = 0; i < 10; i++){
		cin >> diem[i];
		sum += diem[i];
	}
	tb = sum / 10;
	if(tb >= 9) hocluc = "XUATSAC";
	else if(tb >= 8) hocluc = "GIOI";
	else if(tb >= 7) hocluc = "KHA";
	else if(tb >= 5) hocluc = "TB";
	else hocluc = "YEU";
}

void sv::in(){
	cout << ma << " " << name << " " << fixed << setprecision(1) << tb << " " << hocluc << endl;
}

bool cmp(sv a, sv b){
	if(a.tb != b.tb) return a.tb > b.tb;
	return a.ma < b.ma;
}

int main(){
	int n;
	cin >> n;
	sv ds[n];
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
	sort(ds, ds+n, cmp);
	for(int i = 0; i < n; i++){
		ds[i].in();
	}
}