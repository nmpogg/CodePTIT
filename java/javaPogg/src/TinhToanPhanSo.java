import java.util.*;

class PhanSo1 {
    private long tu;
    private long mau;

    PhanSo1(long tu, long mau) {
        this.tu = tu;
        this.mau = mau;
        if (this.mau < 0) {
            this.tu = -this.tu;
            this.mau = -this.mau;
        }
    }

    public void rutGon() {
        long tuso = Math.abs(this.tu);
        long mauso = Math.abs(this.mau);
        long ucln = ucln(tuso, mauso);
        this.tu /= ucln;
        this.mau /= ucln;
        if (this.mau < 0) {
            this.tu = -this.tu;
            this.mau = -this.mau;
        }
    }

    private long ucln(long a, long b) {
        while (b != 0) {
            long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    public PhanSo1 add(PhanSo1 a) {
        long newTu = this.tu * a.mau + a.tu * this.mau;
        long newMau = this.mau * a.mau;
        return new PhanSo1(newTu, newMau);
    }

    public PhanSo1 mul(PhanSo1 a) {
        long newTu = this.tu * a.tu;
        long newMau = this.mau * a.mau;
        return new PhanSo1(newTu, newMau);
    }

    @Override
    public String toString() {
        return tu + "/" + mau;
    }
}

public class TinhToanPhanSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            PhanSo1 a = new PhanSo1(sc.nextLong(), sc.nextLong());
            PhanSo1 b = new PhanSo1(sc.nextLong(), sc.nextLong());
            PhanSo1 c = a.add(b);
            c = c.mul(c);
            PhanSo1 d = a.mul(b).mul(c);
            c.rutGon();
            d.rutGon();
            System.out.println(c + " " + d);
        }
    }
}
