#include <bits/stdc++.h>
using namespace std;
class thoigian{
	private:
	   int gio,phut;
	public:
	  thoigian(int gio, int phut){
	    this -> gio = gio;
	    this -> phut = phut;
	  }
	  thoigian(){
	  }
	  thoigian(string s){
	  	int t, n, cnt = 1;
	  	stringstream ss(s);
	  	string tmp;
	  	while( ss >> tmp){
	  	    for( int i = 0 ; i  < tmp.length(); i++){
                    if( cnt == 1){
                    t += tmp[i] - '0';
                    if( i == tmp.length() - 1){
                    cnt++;
                        continue;}
                     else    t*=10;
                    }
                    else if( cnt == 3){
                        if( cnt == 1){
                    	n += tmp[i] - '0';
                    if( i == tmp.length() - 1){
						cnt++;
                        break;}
                     else    n*=10;
                    }
                    }
                    cnt++;
                    
	  	    }
	  	}
		
		this -> gio = t;
		this -> phut = n;
	  }
	  
		 void nhapbp(){
	    cin>>gio>>phut;
	  }
	   void xemmh(){
	    cout<<gio<<" gio "<<phut<<" phut\n";
	  }
	  
	  friend bool operator < (thoigian a, thoigian b)
    {
        if((a.phut + a.gio*60)< (b.phut + b.gio*60))
        return true;
        else    return false;
    }
    friend thoigian operator - (thoigian a, thoigian b)
    {
        thoigian c;
        int a1 = a.gio*60 + a.phut;
        int b1 = b.gio*60 + b.phut;
        c.phut = (a1-b1)%60;
        c.gio = (a1-b1)/ 60;
        return c;
    }
    friend thoigian operator + (thoigian a, thoigian b)
    {
    	thoigian c;
        int a1 = a.gio*60 + a.phut;
        int b1 = b.gio*60 + b.phut;
        c.phut = (a1+b1)%60;
        c.gio = (a1+b1)/60;
        return c;
    }
    friend thoigian operator * (thoigian a, int b)
    {
        thoigian c;
        int a1 = a.gio*60 + a.phut;
        c.phut = (a1*b)%60;
        c.gio = (a1*b)/60;
        return c;
    }
    friend thoigian operator / (thoigian a, int b)
    {
        thoigian c;
        int a1 = a.gio*60 + a.phut;
        c.phut = (a1/b)%60;
        c.gio = (a1/b)/60;
        return c;
    }
     
};
int main() 
{
    thoigian a, b(3, 20),c;
    a.nhapbp();
    a.xemmh();
    c = thoigian("2 gio 15 phut");
    c.xemmh();
    if(a<b){
    	cout<<"\n a<b";
	} else {
		cout<<"\n a>=b";
		}
	c = a - b ; cout << "\n a - b = " ; c.xemmh();
	c = a + b ; cout << "\n a + b = " ; c.xemmh();
	c = a*2 ; cout << "\n a * 2 = " ; c.xemmh();
	c = a/2 ; cout << "\n a / 2 = " ; c.xemmh();
		
}