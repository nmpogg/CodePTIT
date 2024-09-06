#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

struct PhanSo{
	long long tu, mau;
};

void nhap(PhanSo& a){
	cin >> a.tu >> a.mau;
}

void rutgon(PhanSo& a){
	long long gcd1 = gcd(a.tu, a.mau);
	a.tu /= gcd1;
	a.mau /= gcd1;
}

PhanSo tong(PhanSo a, PhanSo b){
	PhanSo t;
	long long gcd1 = gcd(a.mau, b.mau);
	long long lcm =  a.mau * b.mau / gcd1;
	t.tu = lcm / a.mau * a.tu + lcm / b.mau * b.tu;
	t.mau = a.mau * b.mau / gcd1;
	rutgon(t);	
	return t;
}

void in(PhanSo a){
	cout << a.tu << "/" << a.mau;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
