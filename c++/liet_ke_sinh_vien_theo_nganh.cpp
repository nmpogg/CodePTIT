#include <bits/stdc++.h>
using namespace std;

/*
4
B16DCCN011
Nguyen Trong Duc An
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT02-B
sv4@stu.ptit.edu.vn
1
Ke toan
*/

class SinhVien{
	public:
		string id, ten, lop, email;
		void nhap(){
			cin >> id;
			scanf("\n");
			getline(cin, ten);
			cin >> lop >> email;
		}
		void in(){
			cout << id << " " << ten << " " << lop << " " << email << endl;
		}		
};

string tran(string s, string str){
	if(s == "Ke toan") s = "DCKT";
	if(s == "Cong nghe thong tin" && str[0] != 'E') s = "DCCN";
	if(s == "An toan thong tin" && str[0] != 'E') s = "DCAT";
	if(s == "Vien thong") s = "DCVT";
	if(s == "Dien tu") s = "DCDT";
	return s;
}

string up(string s){
	for(int i = 0; i < s.size(); i++) s[i] = toupper(s[i]);
	return s;
}

int main(){
	int n;
	cin >> n;
	SinhVien ds[n];
	for(int i = 0; i < n; i++) ds[i].nhap();
	int q;
	cin >> q;
	while(q--){
		string s;
		scanf("\n");
		getline(cin, s);
		cout << "DANH SACH SINH VIEN NGANH " << up(s) << ":" << endl;
		for(int i = 0; i < n; i++){
			if(ds[i].id.substr(3, 4) == tran(s, ds[i].lop)){
				ds[i].in();
			}
		}
	}
	return 0;
}
