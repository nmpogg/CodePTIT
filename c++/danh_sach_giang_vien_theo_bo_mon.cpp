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
1
Cong nghe phan mem
*/

class GiaoVien{
	public:
		string id, ten, mon;
		void nhap();
		void in();
		static int dem;
};
int GiaoVien::dem = 0;
void GiaoVien::nhap(){
	dem++;
	if(dem < 10) id = "GV0" + to_string(dem);
	else id = "GV" + to_string(dem);
	scanf("\n");
	getline(cin, ten);
	getline(cin, mon);
	string temp, res = "";
	stringstream ss(mon);
	while(ss >> temp) res += toupper(temp[0]);
	mon = res;
}

void chuanhoa(string& s){
	string temp, res = "";
	stringstream ss(s);
	while(ss >> temp) res += toupper(temp[0]);
	s = res;
}

void GiaoVien::in(){
	cout << id << " " << ten << " " << mon << endl;
}

int main(){
	int n;
	cin >> n;
	GiaoVien ds[n];
	for(int i = 0; i < n; i++) ds[i].nhap();
	int q;
	cin >> q;
	while(q--){
		string s;
		scanf("\n");
		getline(cin, s);
		chuanhoa(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
		for(int i = 0; i < n; i++){
			if(ds[i].mon == s){
				ds[i].in();
			}
		}
	}
	return 0;
}
