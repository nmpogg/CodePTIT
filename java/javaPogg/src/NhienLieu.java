
public class NhienLieu implements Comparable<NhienLieu> {
    private String maDH;
    private int soLuong;

    public NhienLieu(String maDH, int soLuong) {
        this.maDH = maDH;
        this.soLuong = soLuong;
    }
    public String getHangSX(){
        String res = this.maDH.substring(3);
        if(res.equals("BP")) return "British Petro";
        else if(res.equals("ES")) return "Esso";
        else if(res.equals("SH")) return "Shell";
        else if(res.equals("CA")) return "Castrol";
        else if(res.equals("MO")) return "Mobil";
        return "Trong Nuoc";
    }
    
    public int getDonGia(){
        char c = this.maDH.charAt(0);
        if(c == 'X') return 128000;
        else if(c == 'D') return 11200;
        return 9700;
    }
    public long getThue(){
        char c = this.maDH.charAt(0);
        String res = this.maDH.substring(3);
        if(c == 'X' && !res.equals("TN")) return 1L * this.soLuong * this.getDonGia() * 3 / 100;
        else if(c == 'D' && !res.equals("TN")) return 1L * this.soLuong * this.getDonGia() * 35 / 1000;
        else if(c == 'N' && !res.equals("TN")) return 1L * this.soLuong * this.getDonGia() * 2 / 100;
        return 0;
    }
    public long ThanhTien(){
        return 1L * this.getDonGia() * this.soLuong + this.getThue();
    }
    @Override
    public String toString(){
        return this.maDH + " " + this.getHangSX() + " " + this.getDonGia() + " " + this.getThue() + " " + this.ThanhTien();
    }

    @Override
    public int compareTo(NhienLieu t) {
       if(t.ThanhTien() < this.ThanhTien()) return -1;
       return 1;
    }
}
