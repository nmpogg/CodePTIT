#include <bits/stdc++.h>
using namespace std;

struct tg{
	int h, p;
};

struct net{
	string username, password, name;
	tg vao, ra, ingame;
	void nhap();
	void in();
};

void net::nhap(){
	cin >> username >> password;
	cin.ignore();
	getline(cin, name);
	scanf("%d:%d", &vao.h, &vao.p);
	scanf("%d:%d", &ra.h, &ra.p);
	ingame.p = ra.h * 60 + ra.p - vao.h * 60 - vao.p;
	ingame.h = ingame.p / 60;
	ingame.p %= 60;
}
bool cmp(net a, net b){
	if(a.ingame.h != b.ingame.h){
		return a.ingame.h > b.ingame.h;
	}
	else if(a.ingame.p != b.ingame.p) 
		return a.ingame.p > a.ingame.p;
	return a.username < b.username;
}

void net::in(){
	cout << username << " " << password << " " << name << " " << ingame.h << " gio " << ingame.p << " phut\n";
}

int main(){
	int n;
	cin >> n;
	net ds[n];
	for(int i = 0; i < n; i++){
		ds[i].nhap();
	}
	sort(ds, ds+n, cmp);
	for(int i = 0; i < n; i++){
		ds[i].in();
	}
}