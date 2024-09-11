import java.util.*;

public class MatHang3 {
    private String maMH, tenMH, donVi;
    private int donGia, soLuong;

    public MatHang3(int id, String tenMH, String donVi, int donGia, int soLuong) {
        this.maMH = String.format("MH%02d", id);
        this.tenMH = tenMH;
        this.donVi = donVi;
        this.donGia = donGia;
        this.soLuong = soLuong;
    }
    public long getPhiVC(){
        return Math.round(0.05 * this.donGia * this.soLuong);
    }
    public long ThanhTien(){
        return Math.round(this.donGia * this.soLuong + this.getPhiVC());
    }
    public long GiaBan1(){
        return Math.round(this.ThanhTien() + 0.02 * this.ThanhTien());
    }
    public long GiaBan2(){
        return ((this.GiaBan1() + this.soLuong - 1) / this.soLuong + 99) / 100 * 100;
    }
    @Override
    public String toString(){
        return this.maMH + " " + this.tenMH + ' ' + this.donVi + " "  + this.getPhiVC() +  " " + this.ThanhTien() + " " + this.GiaBan2();
    }
}
