
public class BangLuongNV implements Comparable<BangLuongNV> {
    private String maNV, hoTen, chucVu;
    private int luongNgay, soNgayCong;

    public BangLuongNV(int id, String hoTen, int luongNgay, int soNgayCong, String chucVu) {
        this.maNV = String.format("NV%02d", id);
        this.hoTen = hoTen;
        this.chucVu = chucVu;
        this.luongNgay = luongNgay;
        this.soNgayCong = soNgayCong;
    }
    public int getLuongThang(){
        return this.luongNgay * this.soNgayCong;
    }
    public int getThuong(){
        if(this.soNgayCong >= 25) return this.getLuongThang() * 20 / 100;
        else if(this.soNgayCong >= 22) return this.getLuongThang() * 10 / 100;
        return 0;
    }
    public int getPhuCap(){
        if(this.chucVu.equals("GD")) return 250000;
        else if(this.chucVu.equals("PGD")) return 200000;
        else if(this.chucVu.equals("TP")) return 180000;
        else return 150000;
    }
    public int getThucLinh(){
        return this.getLuongThang() + this.getPhuCap() + this.getThuong();
    }
    @Override
    public String toString(){
        return this.maNV + " " + this.hoTen + " " + this.getLuongThang() + " " + this.getThuong() + " " + this.getPhuCap() + " " + this.getThucLinh();
    }

    @Override
    public int compareTo(BangLuongNV o) {
        return -(this.getThucLinh() - o.getThucLinh());
    }
}
