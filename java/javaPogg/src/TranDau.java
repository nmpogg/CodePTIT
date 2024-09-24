
public class TranDau implements Comparable<TranDau>{
    private String maTD;
    private int soCDV;
    private CLB clb;

    public TranDau(String maTD, int soCDV, CLB clb) {
        this.maTD = maTD;
        this.soCDV = soCDV;
        this.clb = clb;
    }
    public int getDoanhThu(){
        return clb.getGiaVe() * this.soCDV;
    }
    @Override
    public String toString(){
        return this.maTD + " " + clb.getTenCLB() + " " + this.getDoanhThu();
    }

    @Override
    public int compareTo(TranDau o) {
        if(this.getDoanhThu() != o.getDoanhThu()) return o.getDoanhThu() - this.getDoanhThu();
        return this.clb.getTenCLB().compareTo(o.clb.getTenCLB());
    }
}
