#include<bits/stdc++.h>
using namespace std;
int cnt=0;
class KhachHang;
class MatHang;
class HoaDon;
map<string,MatHang> mp2;
map<string,KhachHang> mp1;
class KhachHang{
	public :
		string name,gt,bir,dc,ma;
	friend istream &operator >> (istream &is,KhachHang &a){
		scanf("\n");
		cnt++;
		if (cnt < 10) a.ma="KH00"+to_string (cnt);
		else a.ma="KH0"+to_string (cnt);
		getline(cin,a.name);
		getline(cin,a.gt);
		getline(cin,a.bir);
		getline(cin,a.dc);
		mp1[a.ma]=a;
		return is;
	}
};
int cnt2=0;
class MatHang{
	public :
	string mamh,namemh,donvi;
	int mua,ban;	
	friend istream & operator >> (istream &is1,MatHang &a){
		cnt2++;
		if (cnt2 < 10) a.mamh="MH00"+to_string(cnt2);
		else a.mamh="MH0" +to_string(cnt2);
	
		scanf("\n");
		getline(cin,a.namemh);
		getline(cin,a.donvi);
		cin >> a.mua >> a.ban;
		mp2[a.mamh]=a;
		return is1;	
	}		
};
int cnt3=0;
class HoaDon{
	public :
	string mhd;
	string mkh,mmh;
	int sl;
	int thanhtien;
	friend istream & operator >> (istream &is,HoaDon &a){
		cnt3++;
		if (cnt3 < 10) a.mhd="HD00"+to_string(cnt3);
		else if (cnt3 <100) a.mhd="HD0" +to_string(cnt3);
		else a.mhd = "HD"+to_string(cnt3);
		is >> a.mkh;
		is >> a.mmh;
		MatHang x= mp2[a.mmh];
		is >> a.sl;
		a.thanhtien= x.ban*a.sl;
		return is;
	}
	friend ostream & operator << (ostream &os,HoaDon &a){
		os << a.mhd << " " ;
		KhachHang x=mp1[a.mkh];
		os << x.name << " " <<x.dc <<" " ;
		MatHang y=mp2[a.mmh];
		os << y.namemh << " " <<y.donvi << " "<<y.mua << " " << y.ban << " "<< a.sl << " " <<a.thanhtien << "\n";
		return os;
	}
};
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
