import java.util.*;

class TS{
    private String mts, name, trangThai;
    private double toan, ly, hoa, uuTien;

    public TS(String mts, String name, double toan, double ly, double hoa) {
        this.mts = mts;
        this.name = name;
        this.toan = toan * 2;
        this.ly = ly;
        this.hoa = hoa;
        if(this.mts.substring(0, 3).equals("KV1")) this.uuTien = 0.5;
        else if(this.mts.substring(0, 3).equals("KV2")) this.uuTien = 1.0;
        else this.uuTien = 2.5;
        if(this.toan + this.ly + this.hoa + this.uuTien >= 24) this.trangThai = "TRUNG TUYEN";
        else this.trangThai = "TRUOT";
    }
    public String formatDiem(double diem){
        if(diem == (int)diem) return String.format("%d", (int)diem);
        else return String.format("%.1f", diem);
    }
    @Override
    public String toString(){
        return this.mts + " " + this.name + " " + formatDiem(this.uuTien) + " " + formatDiem(this.toan + this.ly + this.hoa) + " " + this.trangThai;
    }
}

public class BaiToanTuyenSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        TS x = new TS(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        System.out.println(x);
    }
}

/*
KV2A002
Hoang Thanh Tuan
5
6
5
*/