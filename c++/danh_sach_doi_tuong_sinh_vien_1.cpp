#include <bits/stdc++.h>
using namespace std;
/*
1
Nguyen Van An
D20CQCN01-B
2/12/2002
3.19
*/

class SinhVien{
	private:
		string id, ten, lop, ns;
		double gpa;
		static int dem;
	public:
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);	
};

int dem = 0;

void chuanhoa(string &s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

istream& operator >> (istream &in, SinhVien &a){
	cin.ignore();
	dem++;
	a.id = "B20DCCN";
	if(dem < 10) a.id = a.id + "00" + to_string(dem);
	else a.id = a.id + "0" + to_string(dem);
	getline(in, a.ten);
	in >> a.lop >> a.ns;
	chuanhoa(a.ns);
	in >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.id << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
	return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
