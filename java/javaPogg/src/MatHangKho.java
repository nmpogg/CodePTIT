
import java.util.HashMap;


public class MatHangKho implements Comparable<MatHangKho> {
    private String maMH, tenMH;
    private int soLuong, donGia;
    private static HashMap<String, Integer> phanLoai = new HashMap<>();

    public MatHangKho(String tenMH, int soLuong, int donGia) {
        this.tenMH = tenMH;
        this.soLuong = soLuong;
        this.donGia = donGia;
        String a[] = this.tenMH.split("\\s+");
        String res = "";
        for(int i = 0; i < 2; i++){
            res += Character.toUpperCase(a[i].charAt(0));
        }
        if(phanLoai.containsKey(res)){
            int freq = phanLoai.get(res);
            phanLoai.put(res, freq+1);
        }
        else phanLoai.put(res, 1);
        this.maMH = String.format("%s%02d", res, phanLoai.get(res));
    }
    public int getChietKhau(){
        int res = this.donGia * this.soLuong;
        if(this.soLuong > 10) return (int)(res * 0.05);
        else if(this.soLuong >= 8) return (int)(res * 0.02);
        else if(this.soLuong >= 5) return (int)(res * 0.01);
        return 0;
    }
    public int ThanhTien(){
        return this.donGia * this.soLuong - this.getChietKhau();
    }
    @Override
    public String toString(){
        return this.maMH + " " + this.tenMH + " " + this.getChietKhau() + " " + this.ThanhTien();
    }

    @Override
    public int compareTo(MatHangKho o) {
        return o.getChietKhau() - this.getChietKhau();
    }
}
