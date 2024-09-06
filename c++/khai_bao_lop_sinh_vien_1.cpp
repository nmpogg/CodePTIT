#include <bits/stdc++.h>
using namespace std;

class SinhVien{
	public:
		string id, name, date, clas;
		float gpa;
	
	void nhap(){
		scanf("\n");
		id = "B20DCCN001";
		getline(cin, name);
		getline(cin, clas);
		getline(cin, date);
		if(date[1] == '/') date.insert(0, "0");
		if(date[4] == '/') date.insert(3, "0");
		cin >> gpa;
	}
	void xuat(){
		cout << id << " " << name << " " << clas << " " << date << " " << fixed << setprecision(2) << gpa;
	}
};

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
