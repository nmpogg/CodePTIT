import java.util.*;
import java.io.*;

class MonOOP{
    private String id, name;
    private double lt, th, thi;

    public MonOOP(int id, String name, double lt, double th, double thi) {
        this.id = String.format("SV%02d", id);
        this.name = name;
        this.lt = lt;
        this.th = th;
        this.thi = thi;
    }
    public double getDTB(){
        return this.lt * 0.25 + this.th * 0.35 + this.thi * 0.4;
    }
    public String getXepLoai(){
        if(this.getDTB() >= 8) return "GIOI";
        else if(this.getDTB() >= 6.5) return "KHA";
        else if(this.getDTB() >= 5) return "TRUNG BINH";
        return "KEM";
    }
    public String formatName(){
        String ans = "";
        String[] a = this.name.trim().split("\\s+");
        for(String x : a){
            ans += Character.toUpperCase(x.charAt(0));
            for(int j = 1; j < x.length(); j++){
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }
    @Override
    public String toString(){
        return this.id + " " + this.formatName() + " " + String.format("%.2f", this.getDTB()) + " " + this.getXepLoai();
    }
}

public class XepLoai {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        int n = sc.nextInt();
        MonOOP[] ds = new MonOOP[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new MonOOP(i+1, sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds, new Comparator<MonOOP>(){
            @Override
            public int compare(MonOOP t, MonOOP t1) {
                if(t1.getDTB() < t.getDTB()) return -1;
                return 1;
            }
            
        });
        for(MonOOP x : ds){
            System.out.println(x);
        }
    }
}
/*
2
 ha Thi kieu     anh
7
6
7
Pham    THI  HAO
6
7
6
*/