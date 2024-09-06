//xay dung lop toa do gom tung do va hoanh do
#include<iostream>
#include<math.h>
using namespace std;
class toado{
    private:
    int td,hd;
    public:
    //ham tao khong doi so 
    toado(){
        td=1;
        hd=2;
    }
    //ham tao co doi so 
    toado(int x,int y){
        td=x;
        hd=y;
    }
    //nhap
    void nhap(){
        cout<<"nhap hoanh do: ";cin>>hd;
        cout<<"nhap tung do: ";cin>>td;
    }
    //xuat
    void xuat(){
        cout<<"hoanh do x= "<<hd<<endl<<"tung do y= "<<td;
    }
    double khoangcach(toado d1, toado d2){
        double kc;
        kc=sqrt(double(d1.hd-d2.hd)*(d1.hd-d2.hd)+(d1.td-d2.hd)*(d1.td-d2.td));
        return kc;
    }
    
};
    int main ()
    {
        toado diem1,diem2;
        diem1.nhap();
        diem1.xuat();
        diem2.nhap();
        diem2.xuat();
        double kc = diem1.khoangcach(diem1, diem2);
        cout<<"khoang cach giua diem 1 va diem 2 la: "<<kc<<endl;
    }
