
public class CLB {
    private String maCLB, tenCLB;
    private int giaVe;

    public CLB(String maCLB, String tenCLB, int giaVe) {
        this.maCLB = maCLB;
        this.tenCLB = tenCLB;
        this.giaVe = giaVe;
    }
    public String getTenCLB(){
        return this.tenCLB;
    }
    public int getGiaVe(){
        return this.giaVe;
    }
}
