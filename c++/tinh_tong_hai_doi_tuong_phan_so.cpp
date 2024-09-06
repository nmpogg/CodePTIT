#include <bits/stdc++.h>
using namespace std;

class PhanSo{
	private:
		long long tu, mau;
	public:
		friend istream& operator >> (istream &in, PhanSo &a);
		friend ostream& operator << (ostream &out, PhanSo a);
		friend PhanSo operator + (PhanSo a, PhanSo b);
		void rutgon();
		PhanSo(long long tu, long long mau);
};

PhanSo::PhanSo(long long tu, long long mau){
	this->tu = tu;
	this->mau = mau;
}

void PhanSo::rutgon(){
	long long res = __gcd(tu, mau);
	tu /= res;
	mau /= res;
}

istream& operator >> (istream &in, PhanSo &a){
	in >> a.tu >> a.mau;
	return in;
}

ostream& operator << (ostream &out, PhanSo a){
	out << a.tu << "/" << a.mau;
	return out;
}

PhanSo operator + (PhanSo a, PhanSo b){
	PhanSo c(1,1);
	c.mau = a.mau * b.mau;
	c.tu = b.tu*a.mau + a.tu*b.mau;
	c.rutgon();
	return c;
}

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}

