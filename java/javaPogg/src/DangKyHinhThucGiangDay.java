import java.util.*;
import java.io.*;

class MonHoc1 implements Comparable<MonHoc1>{
    private String id, name, LT, TH;
    private int soTinChi;

    public MonHoc1(String id, String name, int soTinChi, String LT, String TH) {
        this.id = id;
        this.name = name;
        this.LT = LT;
        this.TH = TH;
        this.soTinChi = soTinChi;
    }
    public boolean isTrucTuyen(){
        if(this.TH.equals("Truc tuyen") || this.TH.contains(".ptit.edu.vn")) return true;
        return false;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.soTinChi + " " + this.LT + " " + this.TH;
    }

    @Override
    public int compareTo(MonHoc1 t) {
        return this.id.compareTo(t.id);
    }
}

public class DangKyHinhThucGiangDay {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("MONHOC.in"));
        int n = sc.nextInt();
        sc.nextLine();
        MonHoc1[] ds = new MonHoc1[n];
        for(int i = 0; i < n; i++){
            String id = sc.nextLine();
            String name = sc.nextLine();
            int tinChi = sc.nextInt();
            sc.nextLine();
            String LT = sc.nextLine();
            String TH = sc.nextLine();
            ds[i] = new MonHoc1(id, name, tinChi, LT, TH);
        }
        Arrays.sort(ds);
        for(MonHoc1 x : ds){
            if(x.isTrucTuyen()) System.out.println(x);
        }
    }
}
/*
3
INT1306
Cau truc du lieu va giai thuat
3
Truc tiep
code.ptit.edu.vn
INT13110
Lap trinh mang voi C++
3
Truc tiep
Truc tuyen
INT1155
Tin hoc co so 2
2
Truc tiep
code.ptit.edu.vn
*/