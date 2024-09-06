#include <bits/stdc++.h>
using namespace std;

/*
1
nGuyEn  vaN    biNH
D20CQCN01-B
2/12/2002
3.1
*/

class SinhVien{
	private:
		string id, ten, lop, ns;
		double gpa;
	public:
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

int dem = 0;

void chuanhoaNs(string &s){
	if(s[1] == '/') s = "0" + s;
	if(s[4] == '/') s.insert(3, "0");
}

void chuanhoaTen(string &s){
	string res = "";
	stringstream ss(s);
	string token;
	while(ss >> token){
		res += toupper(token[0]);
		for(int i = 1; i < token.size(); i++){
			res += tolower(token[i]);
		}
		res += " ";
	}
	res.erase(res.size() - 1, 1);
	s = res;
}

istream& operator >> (istream &in, SinhVien &a){
	++dem;
	a.id = "B20DCCN";
	if(dem < 10) a.id = a.id + "00" + to_string(dem);
	else a.id = a.id + "0" + to_string(dem);
	cin.ignore();
	getline(in, a.ten);
	chuanhoaTen(a.ten);
	in >> a.lop >> a.ns;
	chuanhoaNs(a.ns);
	in >> a.gpa;
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	out << a.id << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed <<setprecision(2) << a.gpa << endl;
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
