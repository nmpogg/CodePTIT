#include <bits/stdc++.h>
using namespace std;

struct ThiSinh{
	string name, date;
	double mon1, mon2, mon3;
};

void nhap(ThiSinh& a){
	getline(cin, a.name);
	getline(cin, a.date);
	cin >> a.mon1 >> a.mon2 >> a.mon3;
}

void in(ThiSinh a){
	cout << a.name << " " << a.date << " " << fixed << setprecision(1) << a.mon1 + a.mon2 + a.mon3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
