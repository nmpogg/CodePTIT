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
		static int cnt1;
		string mkh, tenkh, sex, ns, dc;
		friend istream& operator >> (istream& in, KhachHang &a){
			cnt1++;
			if(cnt1 < 10) a.mkh = "KH00" + to_string(cnt1);
			else a.mkh = "KH0" + to_string(cnt1);
			scanf("\n");
			getline(in, a.tenkh);
			in >> a.sex >> a.ns;
			if(a.ns[1] == '/') a.ns = "0" + a.ns;
			if(a.ns[4] == '/') a.ns.insert(3, "0");
			scanf("\n");
			getline(in, a.dc);
			KH[a.mkh] = a;
			return in;
		}
};
int KhachHang::cnt1 = 0;

class MatHang{
	public:
		static int cnt2;
		string mmh, tenmh, donvi;
		int mua, ban;
		friend istream& operator >> (istream& in, MatHang &a){
			cnt2++;
			if(cnt2 < 10) a.mmh = "MH00" + to_string(cnt2);
			else a.mmh = "MH0" + to_string(cnt2);
			scanf("\n");
			getline(in, a.tenmh);
			getline(in, a.donvi);
			in >> a.mua >> a.ban;
			MH[a.mmh] = a;
			return in;
		}
};
int MatHang::cnt2 = 0;

class HoaDon{
	public:
		static int cnt3;
		string mhd, mkh, mmh;
		long long soluong;
		long long thanhtien, loinhuan;
		friend istream& operator >> (istream& in, HoaDon& a){
			cnt3++;
			if(cnt3 < 10) a.mhd = "HD00" + to_string(cnt3);
			else a.mhd = "HD0" + to_string(cnt3);
			in >> a.mkh >> a.mmh >> a.soluong;
			MatHang x = MH[a.mmh];
			a.thanhtien = a.soluong * x.ban;
			a.loinhuan = ((long long) x.ban - (long long) x.mua) * a.soluong;
			return in;
		}
		friend ostream& operator << (ostream &out, HoaDon a){
			out << a.mhd << " ";
			KhachHang x = KH[a.mkh];
			out << x.tenkh << " " << x.dc << " ";
			MatHang y = MH[a.mmh];
			out << y.tenmh << " " << a.soluong << " " << a.thanhtien << " " << a.loinhuan << endl;
			return out;
		}
};
int HoaDon::cnt3 = 0;

bool cmp(HoaDon a, HoaDon b){
		return a.loinhuan >= b.loinhuan;
	}
void sapxep(HoaDon dshd[], int n){
	sort(dshd, dshd+n, cmp);
}

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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}
