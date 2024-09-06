#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

class PhanSo{
	private:
		long long tu, mau;
	public:
		PhanSo(long long tu, long long mau);
		friend istream& operator >> (istream &in, PhanSo& a);
		friend ostream& operator << (ostream &out, PhanSo a);
		void rutgon();
};

PhanSo::PhanSo(long long tu, long long mau){
	this->tu = tu;
	this->mau = mau;
}

istream& operator >> (istream &in, PhanSo& a){
	in >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}

void PhanSo::rutgon(){
	long long res = gcd(tu, mau);
	tu /= res;
	mau /= res;
}
	
int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}
