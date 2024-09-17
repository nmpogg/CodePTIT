
public class PhuHo implements Comparable<PhuHo> {
    private String id, hoTen, ns;
    private double LT, TH;

    public PhuHo(int id, String hoTen, String ns, double LT, double TH) {
        this.id = String.format("PH%02d", id);
        this.hoTen = hoTen;
        this.ns = ns;
        this.LT = LT;
        this.TH = TH;
    }
    public double getDiemThuong(){
        if(this.LT >= 8 && this.TH >= 8) return 1;
        else if(this.LT >= 7.5 && this.TH >= 7.5) return 0.5;
        return 0;
    }
    public int getDiemTB(){
        return Math.min(10, (int) Math.round((this.LT + this.TH) / 2f + this.getDiemThuong()));
    }
    public int getTuoi(){
        return 2021 - Integer.parseInt(this.ns.substring(6));
    }
    public String XepLoai(){
        int res = this.getDiemTB();
        if(res < 5) return "Truot";
        else if(res <= 6) return "Trung binh";
        else if(res == 7) return "Kha";
        else if(res == 8) return "Gioi";
        return "Xuat sac";
    }
    @Override
    public String toString(){
        return this.id + " " + this.hoTen + " " + this.getTuoi() + " " + this.getDiemTB() + " " + this.XepLoai();
    }

    @Override
    public int compareTo(PhuHo t) {
        return t.getDiemTB() - this.getDiemTB();
    }
}
