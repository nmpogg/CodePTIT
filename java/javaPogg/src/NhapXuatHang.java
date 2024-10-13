import java.util.*;

class MatHang4 {
    private String maMH, tenMH, xepLoai;
    private long slNhap, donGiaNhap, slXuat;

    public MatHang4(String maMH, String tenMH, String xepLoai) {
        this.maMH = maMH;
        this.tenMH = tenMH;
        this.xepLoai = xepLoai;
    }

    public void setSlNhap(long slNhap) {
        this.slNhap = slNhap;
    }

    public void setDonGiaNhap(long donGiaNhap) {
        this.donGiaNhap = donGiaNhap;
    }

    public void setSlXuat(long slXuat) {
        this.slXuat = slXuat;
    }
    
    public long getGiaTriXuat() {
        double giaTri;
        if (this.xepLoai.equals("A")) 
            giaTri = this.slXuat * this.donGiaNhap * 1.08; // 8%
        else if (this.xepLoai.equals("B")) 
            giaTri = this.slXuat * this.donGiaNhap * 1.05; // 5%
        else 
            giaTri = this.slXuat * this.donGiaNhap * 1.02; // 2%

        return (long) (Math.round(giaTri / 10) * 10);
    }
    @Override
    public String toString(){
        return this.maMH + " " + this.tenMH + " " + this.slNhap * this.donGiaNhap + " " + this.getGiaTriXuat();
    }
}

public class NhapXuatHang{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        MatHang4[] ds = new MatHang4[n];
        HashMap<String, MatHang4> map = new HashMap<>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            String id = sc.nextLine();
            String name = sc.nextLine();
            String ma = sc.next();
            ds[i] = new MatHang4(id, name, ma);
            map.put(id, ds[i]);
        }
        int m = sc.nextInt();
        for(int i = 0; i < m; i++){
            String id = sc.next();
            long nhap = sc.nextLong();
            long dongia = sc.nextLong();
            long xuat = sc.nextLong();
            MatHang4 x = map.get(id);
            x.setSlNhap(nhap);
            x.setDonGiaNhap(dongia);
            x.setSlXuat(xuat);
        }
        for(MatHang4 x : ds){
            System.out.println(x);
        }
    }
}
/*
2
A001
Tu lanh
A
P002
May giat
B
2
A001 500 100 300
P002 1000 1000 500
*/