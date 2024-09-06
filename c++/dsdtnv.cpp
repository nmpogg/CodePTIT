#include<bits/stdc++.h>
using namespace std;

class NhanVien{
	private:
		string m, hoten, gt, ns, dc, ma, ki;
	public:
		friend istream& operator >> (istream &, NhanVien&);
		friend ostream& operator << (ostream &, NhanVien);
};
int dem = 0;
istream& operator >> (istream& in, NhanVien& other){
	dem++;
	other.m = string(5 - to_string(dem).length(), '0') + to_string(dem);	
	in.ignore();
	getline(in, other.hoten);
	in >> other.gt >> other.ns;
	in.ignore();
	getline(in, other.dc);
	in >> other.ma >> other.ki;
	return in;
}

ostream& operator << (ostream& out, NhanVien other){
	out << other.m << " ";
	out << other.hoten << " ";
	out << other.ns << " ";
	out << other.dc << " ";
	out << other.ma << " ";
	out << other.ki << " ";
	out << endl;
	return out;
}
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}

