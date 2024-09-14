
public class HoaDonDien implements Comparable<HoaDonDien>{
    private String maKH, loaiSD;
    public int chiSoCu, chiSoMoi;

    public HoaDonDien(int id, String loaiSD, int chiSoCu, int chiSoMoi) {
        this.maKH = String.format("KH%02d", id);
        this.loaiSD = loaiSD;
        this.chiSoCu = chiSoCu;
        this.chiSoMoi = chiSoMoi;
    }
    public int HeSo(){
        if(this.loaiSD.equals("KD")) return 3;
        else if(this.loaiSD.equals("NN")) return 5;
        else if(this.loaiSD.equals("TT")) return 4;
        return 2;
    }
    public int ThanhTien(){
        return (this.chiSoMoi - this.chiSoCu) * this.HeSo() * 550;
    }
    public int PhuTroi(){
        int res = this.chiSoMoi - this.chiSoCu;
        if(res < 50) return 0;
        else if(res <= 100) return Math.round(this.ThanhTien() * 35 / 100f);
        return this.ThanhTien();
    }
    public int TongTien(){
        return this.PhuTroi() + this.ThanhTien();
    }
    @Override
    public String toString(){
        return this.maKH + " " + this.HeSo() + " " + this.ThanhTien() + " " + this.PhuTroi() + " " + this.TongTien();
    }

    @Override
    public int compareTo(HoaDonDien t) {
        return t.TongTien() - this.TongTien();
    }
}
