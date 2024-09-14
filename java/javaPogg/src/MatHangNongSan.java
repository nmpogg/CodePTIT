import java.util.*;

public class MatHangNongSan implements Comparable<MatHangNongSan> {
    private String maMH;
    private long soLuongNhap;

    public MatHangNongSan(String maMH, long soLuongNhap) {
        this.maMH = maMH;
        this.soLuongNhap = soLuongNhap;
    }
    public boolean isValid(){
        if(this.maMH.length() != 5) return false;
        char dau = this.maMH.charAt(0);
        if(dau != 'A' && dau != 'B') return false;
        char cuoi = this.maMH.charAt(4);
        if(cuoi != 'N' && cuoi != 'Y') return false;
        return true;
    }
    public String getMaMH(){
        return this.maMH;
    }
    public long getSoLuongXuat(){
        if(this.maMH.charAt(0) == 'A') 
            return Math.round(this.soLuongNhap * 60 / 100f);
        return Math.round(this.soLuongNhap * 70 / 100f);
    }
    public long getDonGia(){
        if(this.maMH.charAt(4) == 'Y') return 110000;
        return 135000;
    }
    public long getTien(){
        return this.getSoLuongXuat() * this.getDonGia();
    }
    
    public long getThue(){
        char dau = this.maMH.charAt(0);
        char cuoi = this.maMH.charAt(4);
        if(dau == 'A'){
            if(cuoi == 'Y') return this.getTien() * 8 / 100;
            else return this.getTien() * 11 / 100;
        }
        else if(cuoi == 'Y') return this.getTien() * 17 /100;
        return this.getTien() * 22 / 100;
    }
    @Override
    public String toString(){
        return this.maMH + " " + this.soLuongNhap + " " + this.getSoLuongXuat() + " " + this.getDonGia() + " " + this.getTien() + " " + this.getThue();
    }

    @Override
    public int compareTo(MatHangNongSan t) {
        return (int)(t.getThue() - this.getThue());
    }
}
