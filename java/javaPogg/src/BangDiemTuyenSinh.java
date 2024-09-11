import java.util.*;

class BangDiemTS{
    private String id, name;
    private double toan, ly, hoa;

    public BangDiemTS(String id, String name, double toan, double ly, double hoa) {
        this.id = id;
        this.name = name;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }
    public String getUutien(){
        String res = this.id.substring(0, 3);
        if(res.equals("KV1")) return "0.5";
        else if(res.equals("KV2")) return "1";
        return "2.5";
    }
    public String getTongDiem(){
        double res = this.toan * 2 + this.ly + this.hoa;
        if(res == (int)res) return Integer.toString((int) res);
        return Double.toString(res);
    }
    public String getKQ(){
        if(Double.parseDouble(this.getTongDiem()) + Double.parseDouble(this.getUutien()) >= 24) return "TRUNG TUYEN";
        return "TRUOT";
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.getUutien() + " " + this.getTongDiem() + " " + this.getKQ();
    }
}

public class BangDiemTuyenSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangDiemTS[] ds = new BangDiemTS[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new BangDiemTS(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        for(BangDiemTS x : ds){
            System.out.println(x);
        }
    }
}
/*
2
KV2A002
Hoang Thanh Tuan
5
6
5
KV2B123
Ly Thi Thu Ha
8
6.5
7
*/