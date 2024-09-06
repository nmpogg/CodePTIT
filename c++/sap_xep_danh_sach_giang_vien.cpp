#include <bits/stdc++.h>
using namespace std;

/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
*/

class GiaoVien{
	public:
		string id, ten, mon;
		void nhap();
		void in();
};
int dem = 0;

void GiaoVien::nhap(){
	dem++;
	if(dem < 10) id = "GV0" + to_string(dem);
	else id = "GV" + to_string(dem);
	scanf("\n");
	getline(cin, ten);
	getline(cin, mon);
	stringstream ss(mon);
	string temp, res = "";
	while(ss >> temp) res += toupper(temp[0]);
	mon = res;
}

void GiaoVien::in(){
	cout << id << " " << ten << " " << mon << endl;
}

bool cmp(GiaoVien a, GiaoVien b){
	string ten1, ten2;
	stringstream ss1(a.ten);
	stringstream ss2(b.ten);
	string tmp;
	while(ss1 >> tmp) ten1 = tmp;
	while(ss2 >> tmp) ten2 = tmp;
	if(ten1 != ten2) return ten1 < ten2;
	else return a.id < b.id;
}

int main(){
	int n;
	cin >> n;
	GiaoVien ds[n];
	for(int i = 0; i < n; i++) ds[i].nhap();
	sort(ds, ds+n, cmp);
	for(int i = 0; i < n; i++) ds[i].in();
	return 0;
}
