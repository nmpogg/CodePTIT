import java.util.*;

class PhanSoBuild{
    private long tu;
    private long mau;
    PhanSoBuild(long tu, long mau){
        this.tu = tu;
        this.mau = mau;
    }
    public long getTu(){
        return tu;
    }
    public long getMau(){
        return mau;
    }
    public long gcd(long tu, long mau){
        if(tu == 0) return mau;
        return gcd(mau % tu, tu);
    }
    public PhanSoBuild rutGon(long tu, long mau){
        PhanSoBuild a = new PhanSoBuild(tu, mau);
        long GCD = a.gcd(tu, mau);
        a.tu /= GCD;
        a.mau /= GCD;
        return a;
    }
    @Override
    public String toString(){
        return tu + "/" + mau;
    }
}
        
public class phanso {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        PhanSoBuild a = new PhanSoBuild(sc.nextLong(), sc.nextLong());
        System.out.println(a.rutGon(a.getTu(), a.getMau()).toString());
    }
}
