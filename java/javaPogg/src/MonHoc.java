import java.util.*;

public class MonHoc {
    private String ma, ten;
    private int soTinChi;

    public MonHoc(String ma, String ten, int soTinChi) {
        this.ma = ma;
        this.ten = ten;
        this.soTinChi = soTinChi;
    }
    public String getTen(){
        return this.ten;
    }
    @Override
    public String toString(){
        return this.ma + " " + this.ten + " " + this.soTinChi;
    }
}
