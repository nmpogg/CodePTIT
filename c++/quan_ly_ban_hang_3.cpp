#include <bits/stdc++.h>
using namespace std;

class KhachHang;
class MatHang;
class HoaDon;

long long sto(string s){
	long long sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum = sum  * 10 + s[i] - '0';
	}
	return sum;
}

fstream fileKH("KH.in", ios::in);
fstream fileMH("MH.in", ios::in);
fstream fileHD("HD.in", ios::in);
vector<string> v;

map<string, KhachHang> KH;
map<string, MatHang> MH;
int n, m, k;
int cnt1 = 0;
int cnt2 = 0;
int cnt3 = 0;
int dem = 0;
//KhachHang dskh[25];
//MatHang dsmh[45];
//HoaDon dshd[105];
class KhachHang{
	public:
//		static int cnt1;
		string mkh, name, sex, ns, dc;
		friend void nhapKH();
};
//int KhachHang::cnt1 = 0;
KhachHang dskh[25];
void nhapKH(){
	string so = v[dem++];
	n = stoi(so);
	for(int i = 0 ; i < n; i++){
		cnt1++;
		if(cnt1 < 10) dskh[i].mkh = "KH00" + to_string(cnt1);
		else dskh[i].mkh = "KH0" + to_string(cnt1);
		dskh[i].name = v[dem++];
		dskh[i].sex = v[dem++];
		dskh[i].ns = v[dem++];
//		getline(fileKH, dskh[i].name);
//		getline(fileKH, dskh[i].sex);
//		getline(fileKH, dskh[i].ns);
//		scanf("\n");
		dskh[i].dc = v[dem++];
//		getline(fileKH, dskh[i].dc);
		KH[dskh[i].mkh] = dskh[i];
//		cout << dskh[i].mkh << " " << dskh[i].name << " " << dskh[i].sex << " " << dskh[i].ns << " " << dskh[i].dc << endl;
	}
}

class MatHang{
	public:
//		static int cnt2;
		string mmh, tmh, donvi;
		long long mua, ban;
		friend void nhapMH();
};
//int MatHang::cnt2 = 0;
MatHang dsmh[45];

void nhapMH(){
	string so = v[dem++];
	m = stoi(so);
	for(int i = 0; i < m; i++){
		cnt2++;
		if(cnt2 < 10) dsmh[i].mmh = "MH00" + to_string(cnt2);
		else dsmh[i].mmh = "MH0" + to_string(cnt2);
		dsmh[i].tmh = v[dem++];
		dsmh[i].donvi = v[dem++];
		string m1, m2;
		m1 = v[dem++];
		m2 = v[dem++];
		dsmh[i].mua = stoi(m1);
		dsmh[i].ban = stoi(m2);
//		scanf("\n");
//		if(i == 0) fileMH.ignore();
//		getline(fileMH, dsmh[i].tmh);
//		getline(fileMH, dsmh[i].donvi);
//		fileMH >> dsmh[i].mua >> dsmh[i].ban;
		MH[dsmh[i].mmh] = dsmh[i];
//		fileMH.ignore();
//		cout << dsmh[i].mmh << " " << dsmh[i].tmh << " " << dsmh[i].donvi << " " << dsmh[i].mua << " " << dsmh[i].ban << endl;
	}
}

class HoaDon{
	public:
//		static int cnt3;
		string mhd, mkh, mmh;
		int soluong;
		long long thanhtien;
		friend void nhapHD();
};
//int HoaDon::cnt3 = 0;
HoaDon dshd[105];

void nhapHD(){
	string so = v[dem++];
	k = stoi(so);
	for(int i = 0; i < k; i++){
		cnt3++;
		if(cnt3 < 10) dshd[i].mhd = "HD00" + to_string(cnt3);
		else dshd[i].mhd = "HD0" + to_string(cnt3);
		dshd[i].mkh = v[dem++];
		dshd[i].mmh = v[dem++];
		string sl = v[dem++];
		dshd[i].soluong = sto(sl);
//		if(i == 0) fileHD.ignore();
//		fileHD >> dshd[i].mkh >> dshd[i].mmh >> dshd[i].soluong;
		MatHang x = MH[dshd[i].mmh];
		dshd[i].thanhtien = x.ban * dshd[i].soluong;
//		fileHD.ignore();
//		cout << dshd[i].mkh << " " << dshd[i].mmh << " " << dshd[i].soluong << endl;
	}
}

void xuatHD(){
	for(int i = 0; i < k; i++){
		cout << dshd[i].mhd << " ";
		KhachHang x = KH[dshd[i].mkh];
		cout << x.name << " " << x.dc << " ";
		MatHang y = MH[dshd[i].mmh];
		cout << y.tmh << " " << y.donvi << " " << y.mua << " " << y.ban << " ";
		cout << dshd[i].soluong << " " << dshd[i].thanhtien << endl;
	}
}


int main(){
	string res;
	while(getline(fileKH, res)){
		v.push_back(res);
	}
	while(getline(fileMH, res)){
		v.push_back(res);
	}
	while(fileHD >> res){
		v.push_back(res);
	}
//	for(int i = 0; i < v.size(); i++) cout << v[i] << endl;
	nhapKH();
	nhapMH();
	nhapHD();
	xuatHD();
	return 0; 
}
















