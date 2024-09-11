import java.util.*;

class BangDiemHS{
    private String id, name;
    private double[] a;

    public BangDiemHS(int id, String name, double[] a) {
        this.id = String.format("HS%02d", id);
        this.name = name;
        this.a = a;
    }

    public String getId() {
        return this.id;
    }
    
    public double getTBC(){
        double res = 0;
        for(int i = 0; i < 10; i++){
            if(i == 0 || i == 1) res += this.a[i] * 2;
            else res += this.a[i];
        }
        res /= 12;
        return Math.round(res * 10) / 10f;
    }
    public String getHocLuc(){
        double TBC = getTBC();
        if(TBC >= 9) return "XUAT SAC";
        else if(TBC >= 8) return "GIOI";
        else if(TBC >= 7) return "KHA";
        else if(TBC >= 5) return "TB";
        else return "YEU";
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + String.format("%.1f", getTBC()) + " " + getHocLuc();
    }
}

public class BangDiemHocSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        BangDiemHS[] ds = new BangDiemHS[n];
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            String name = sc.nextLine();
            double[] a = new double[10];
            for(int j = 0; j < 10; j++){
                a[j] = sc.nextDouble();
            }
            ds[i-1] = new BangDiemHS(i, name, a);
        }
        Arrays.sort(ds, new Comparator<BangDiemHS>(){
            @Override
            public int compare(BangDiemHS a, BangDiemHS b){
                if(a.getTBC() != b.getTBC()){
                    if(a.getTBC() > b.getTBC()) return -1;
                    else return 1;
                }
                return a.getId().compareTo(b.getId());
            }
        });
        for(BangDiemHS x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Luu Thuy Nhi
9.3  9.0  7.1  6.5  6.2  6.0  8.2  6.7  4.8  5.5
Le Van Tam
8.0  8.0  5.5  9.0  6.8  9.0  7.2  8.3  7.2  6.8
Nguyen Thai Binh
9.0  6.4  6.0  7.5  6.7  5.5  5.0  6.0  6.0  6.0
*/