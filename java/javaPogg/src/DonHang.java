
public class DonHang implements Comparable<DonHang>{
    private String tenHang, maDH;
    private int donGia, soLuong;

    public DonHang(String tenHang, String maDH, int donGia, int soLuong) {
        this.tenHang = tenHang;
        this.maDH = maDH;
        this.donGia = donGia;
        this.soLuong = soLuong;
    }
    public String getStt(){
        return this.maDH.substring(1, 4);
    }
    public int getGiamGia(){
        char c = this.maDH.charAt(4);
        if(c == '1')return Math.round(this.donGia * this.soLuong / 100 * 50);
        return Math.round(this.donGia * this.soLuong / 100 * 30);
    }
    public int getThanhTien(){
        return this.soLuong * this.donGia - this.getGiamGia();
    }
    @Override
    public String toString(){
        return this.tenHang + " "  + this.maDH + " " + this.getStt() + " " + this.getGiamGia() + " " + this.getThanhTien();
    }

    @Override
    public int compareTo(DonHang o) {
        return this.getStt().compareTo(o.getStt());
    }
}
