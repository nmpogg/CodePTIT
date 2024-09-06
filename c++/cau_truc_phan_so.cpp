#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
	if(a == 0) return b;
	return gcd(b % a, a);
}

struct PhanSo{
	long long a, b;
};

void nhap(PhanSo& ps){
	cin >> ps.a >> ps.b;
}

void rutgon(PhanSo& ps){
	long long gcd1 = gcd(ps.a, ps.b);
	ps.a /= gcd1;
	ps.b /= gcd1;
}

void in(PhanSo ps){
	cout << ps.a << "/" << ps.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
