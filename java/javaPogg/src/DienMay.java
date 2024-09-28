
public class DienMay {
    private String maHang, tenHang, xepLoai;

    public DienMay(String maHang, String tenHang, String xepLoai) {
        this.maHang = maHang;
        this.tenHang = tenHang;
        this.xepLoai = xepLoai;
    }
    public int getLai(){
        if(this.xepLoai.equals("A")) return 8;
        else if(this.xepLoai.equals("B")) return 5;
        return 2;
    }
}
