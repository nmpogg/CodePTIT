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
aN
*/

class GiangVien{
	private:
		string id, ten, mon;
		static int cnt;
	public:
		void nhap(){
			cnt++;
			if(cnt < 10) id = "GV0" + to_string(cnt);
			else id = "GV" + to_string(cnt);
			scanf("\n");
			getline(cin, ten);
			getline(cin, mon);
			stringstream ss(mon);
			string res, s = "";
			while(ss >> res){
				s += toupper(res[0]);
			}
			mon = s;
		}
		void in(){
			cout << id << " " << ten << " " << mon << endl;
		}
		string getTen(){
			return ten;
		}
};

int GiangVien::cnt = 0;

bool timkiem(string str, string res){
	for(char& x : str) x = tolower(x);
	for(char& x : res) x = tolower(x);
	return str.find(res) != string::npos;
}

int main(){
	int n;
	cin >> n;
	GiangVien ds[n];
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
	int q;
	cin >> q;
	while(q--){
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":\n";
		for(int i = 0; i < n; i++){
			if(timkiem(ds[i].getTen(), s)) ds[i].in();
		}
	}
	return 0;
}
