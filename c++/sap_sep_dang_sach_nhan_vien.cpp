#include <bits/stdc++.h>
using namespace std;

struct NhanVien{
	string mnv = "000";
	string ten,  sex, date, add, mathue, hopdong,day,month,year;
	
};

bool ss(NhanVien a, NhanVien b){
	if(a.year < b.year) return 1;
	if(a.year > b.year) return 0;
	if(a.month < b.month) return 1;
	if(a.month > b.month) return 0;
	if(a.day > b.day) return 0;
	return 1;
}

void fix(string& s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

int cnt=1;
void nhap(NhanVien& a){
	if(cnt == 1) cin.ignore();
	string str = to_string(cnt);
	if(cnt < 10){
		a.mnv = a.mnv + "0" + str;
	}
	else a.mnv = a.mnv + str;
	cnt++;
	getline(cin, a.ten);
	getline(cin, a.sex);
	getline(cin, a.date);
	fix(a.date);
	stringstream ss(a.date);
	getline(ss,a.month,'/');
	getline(ss,a.day,'/');
	getline(ss,a.year,'/');
	getline(cin, a.add);
	getline(cin, a.mathue);
	getline(cin, a.hopdong);	
}

void sapxep(NhanVien ds[], int& n){
	sort(ds, ds+n, ss);
}

void inds(NhanVien ds[], int n){
	for(int i = 0; i < n; i++){
		cout << ds[i].mnv << " " << ds[i].ten << " " << ds[i].sex << " " << ds[i].date << " " << ds[i].add << " " << ds[i].mathue << " " << ds[i].hopdong << endl;
	}
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
