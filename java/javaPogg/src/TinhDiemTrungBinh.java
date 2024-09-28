import java.util.*;
import java.io.*;

class SinhVien7 implements Comparable<SinhVien7>{
    private String id, name;
    private double mon1, mon2, mon3;
    private int rank;

    public SinhVien7(int id, String name, double mon1, double mon2, double mon3) {
        this.id = String.format("SV%02d", id);
        this.name = name;
        this.mon1 = mon1;
        this.mon2 = mon2;
        this.mon3 = mon3;
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
    public void setRank(int rank){
        this.rank = rank;
    }
    public int getRank(){
        return this.rank;
    }
    public String getAvg(){
        double res = (this.mon1 * 3 + this.mon2 * 3 + this.mon3 * 2) / 8f;
        return String.format("%.2f", res);
    }
    
    @Override
    public String toString(){
        return this.id + " " + this.formatName() + " " + this.getAvg() + " " + this.rank;
    }

    @Override
    public int compareTo(SinhVien7 o) {
        double a = Double.parseDouble(this.getAvg());
        double b = Double.parseDouble(o.getAvg());
        if(a == b){
            return this.id.compareTo(o.id);
        }
        if(a > b) return -1;
        else return 1;
    }
}

public class TinhDiemTrungBinh {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("BANGDIEM.in"));
        int n = sc.nextInt();
        SinhVien7[] ds = new SinhVien7[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVien7(i+1, sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds);
        for(int i = 0; i < n; i++){
            if(i > 0 && ds[i].getAvg().equals(ds[i-1].getAvg())){
                ds[i].setRank(ds[i-1].getRank());
            }
            else ds[i].setRank(i+1);
        }
        for(SinhVien7 x : ds){
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