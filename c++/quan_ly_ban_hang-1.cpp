#include <bits/stdc++.h>
using namespace std;
/*
2
Nguyen Van Nam
Nam
12/12/1997
Mo Lao-Ha Dong-Ha Noi
Tran Van Binh
Nam
11/14/1995
Phung Khoang-Nam Tu Liem-Ha Noi
2
Ao phong tre em
Cai
25000
41000
Ao khoac nam
Cai
240000
515000
3
KH001 MH001 2
KH001 MH002 3
KH002 MH002 4
*/

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang{
	public:
		string makh, ten, sex, ns, dc;
		static int dem;
	public:
		friend istream& operator >> (istream &in, KhachHang &a){
			dem++;
			if(dem < 10) a.makh = "KH00" + to_string(dem);
			else if(dem < 100) a.makh = "KH0" + to_string(dem);
			else a.makh = "KH" + to_string(dem);
			scanf("\n");
			getline(in, a.ten);
			getline(in, a.sex);
			getline(in, a.ns);
			getline(in, a.dc);
			KH[a.makh] = a;
			return in;
		}		
};
int KhachHang::dem = 0;
class MatHang{
	public:
		string mamh, tmh, donvi;
		int mua, ban;
		static int cnt;
	public:
		friend istream& operator >> (istream &in1, MatHang &a){
			cnt++;
			if(cnt < 10) a.mamh = "MH00" + to_string(cnt);
			else if(cnt < 100) a.mamh = "MH0" + to_string(cnt);	
			else a.mamh = "MH" + to_string(cnt);
			scanf("\n");
			getline(in1, a.tmh);
			in1 >> a.donvi;
			in1 >> a.mua >> a.ban;
			MH[a.mamh] = a;
			return in1;	
		}
};
int MatHang::cnt = 0;

class HoaDon{
	public:		
		string mhd, mkh, mmh;
		int sl, thanhtien;
		static int cnt2;
	public:
		friend istream& operator >> (istream &in2, HoaDon &b){
			cnt2++; 
			if(cnt2 < 10) b.mhd = "HD00" + to_string(cnt2);
			else if(cnt2 < 100) b.mhd = "HD0" + to_string(cnt2);
			else b.mhd = "HD" +to_string(cnt2);
			in2 >> b.mkh >> b.mmh;
			MatHang x = MH[b.mmh];
			in2 >> b.sl;
			b.thanhtien = x.ban * b.sl;
			return in2;
		}
		friend ostream& operator << (ostream &out, HoaDon b){ 
			out << b.mhd << " ";
			KhachHang x = KH[b.mkh];
			out << x.ten << " " << x.dc << " ";
			MatHang y = MH[b.mmh];
			out << y.tmh << " " << y.donvi << " " << y.mua << " " << y.ban << " ";
			out << b.sl << " " << b.thanhtien << endl;
			return out;
		}
};
int HoaDon::cnt2 = 0;
int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
