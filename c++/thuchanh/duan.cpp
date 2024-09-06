// xay dung lop phan so 
//phuong thuc ham tao co va khong co doi so 
//nhap xuat
//rut gon
//toan tu so sanh >
//nhap vao 5 ps va sap xep theo thu tu giam dan roi in ra man hinh
#include<bits/stdc++.h>
using namespace std;
class ps{
	private:
		int tu,mau;
	public:
		//ham tao khong co doi so
	ps ()
	{
		tu=1;
		mau=2;
	}
	//ham tao co doi so 
	ps (int x,int y)
	{
		tu=x;
		mau=y;
	}
	//nhap
	void nhap()
	{
		cout<<"nhap tu so: ";cin>>tu;
		cout<<"nhap mau so: ";cin>>mau;
	}
	//xuat
	void xuat()
	{
		cout<<"phan so la: "<<tu<<"/"<<mau;
	}
	//rut gon phan so
	ps rg (ps t)
	{
		int ucln=1,i;
		for(i=tu;i>0;i--)
		{
			if(tu%i==0 && mau%i==0);
			ucln=i;
		}
		t.tu=tu/ucln;
		t.mau=mau/ucln;
		return t;	
	}
	//toan tu so sanh
	  bool operator>(ps k) {
        return (tu * k.mau > k.tu * mau);
    }
	//sap xep theo thu tu giam dan
	static void sapxep(ps a[],int n)
	{
		ps tg;
		int i,j;
		for(i=0;i<n-1;i++)
			for (j=i+1;j<n;j++)
			if(a[j] > a[i])
			{
				tg = a[i];
				a[i]=a[j];
				a[j]=tg;
			}
	 } 
};
int main ()
{
//	ps a,b,c,d,e;
//	a.nhap();
//	a.xuat();
//	b.nhap();
//	b.xuat();
//	c.nhap();
//	c.xuat();
	int n;
	cin >> n;
	ps a1[n];
	for(int i = 0; i < n; i++){
		a1[i].nhap();
	}
	ps::sapxep(a1,n);
	for(int i = 0; i < n ; i++){
		a1[i].xuat();
		cout << endl;
	}
}
