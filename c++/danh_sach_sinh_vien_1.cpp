#include <bits/stdc++.h>
using namespace std;

struct SinhVien{
	string ma, ten, lop, ns;
	float gpa;
};

void nhap(SinhVien ds[], int &n){
	for(int i = 0; i < n ;i++){
		cin.ignore();
		ds[i].ma = "B20DCCN";
		ds[i].ma += to_string(i+1);
		while(ds[i].ma.size() < 10) ds[i].ma.insert(7, "0");
		getline(cin, ds[i].ten);
		cin >> ds[i].lop;
		cin.ignore();
		cin >> ds[i].ns >> ds[i].gpa;
		if(ds[i].ns[1] == '/') ds[i].ns = "0" +ds[i].ns;
		if(ds[i].ns[4] == '/') ds[i].ns.insert(3, "0");
	}
}

void in(SinhVien ds[], int n){
	for(int i = 0; i < n; i++){
		cout << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " " << fixed << setprecision(2) << ds[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
