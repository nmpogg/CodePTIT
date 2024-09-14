
public class NhanVien1 implements Comparable<NhanVien1>{
    private String maNV, hoTen, chucVu;
    private long luongCoBan, soNgayCong;

    public NhanVien1(int id, String hoTen, String chucVu, long luongCoBan, long soNgayCong) {
        this.maNV = String.format("NV%02d", id);
        this.hoTen = hoTen;
        this.chucVu = chucVu;
        this.luongCoBan = luongCoBan;
        this.soNgayCong = soNgayCong;
    }

    public String getChucVu(){
        return this.chucVu;
    }
    
    public int getPhuCap(){
        if(this.chucVu.equals("GD")) return 500;
        else if(this.chucVu.equals("PGD")) return 400;
        else if(this.chucVu.equals("TP")) return 300;
        else if(this.chucVu.equals("KT")) return 250;
        return 100;
    }
    
    public long getTamUng(){
        if((this.getPhuCap() + this.luongCoBan * this.soNgayCong) * 2 / 3 < 25000){
            return Math.round((this.getPhuCap() + this.luongCoBan * this.soNgayCong) * 2 / 3 / 1000.0) * 1000;  
        }
        return 25000;
    }
    public long getThuNhap(){
        return this.luongCoBan * this.soNgayCong + this.getPhuCap();
    }
    @Override
    public String toString(){
        return this.maNV + " " + this.hoTen + " " + this.getPhuCap() + " " + this.luongCoBan * this.soNgayCong + " " + this.getTamUng() + " " + (this.luongCoBan * this.soNgayCong + this.getPhuCap() - this.getTamUng());
    }

    @Override
    public int compareTo(NhanVien1 o) {
        return (int)(o.getThuNhap() - this.getThuNhap());
    }
}