import java.util.*;

class PhanSo{
    private long tu;
    private long mau;
    PhanSo(){};
    PhanSo(long tu, long mau){
        this.tu = tu;
        this.mau = mau;
    }
    public long gcd(long tu, long mau){
        if(tu == 0) return mau;
        return gcd(mau % tu, tu);
    }
    public PhanSo rutGon(){
        PhanSo a = new PhanSo(tu, mau);
        long GCD = a.gcd(tu, mau);
        a.tu /= GCD;
        a.mau /= GCD;
        return a;
    }
    
    public PhanSo Tong(PhanSo a, PhanSo b){
        PhanSo c = new PhanSo();
        c.mau = a.mau * b.mau;
        c.tu = a.mau * b.tu + a.tu * b.mau;
        return c.rutGon();
    }
    public String toString(){
        return tu + "/" + mau;
    }
}
        
public class tongPhanSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhanSo a = new PhanSo(sc.nextLong(), sc.nextLong());
        PhanSo b = new PhanSo(sc.nextLong(), sc.nextLong());
        System.out.println(a.Tong(a, b).toString());
    }
}
