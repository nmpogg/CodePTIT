
import java.util.*;
import java.io.*;

class ThiSinh1 {

    private String id, name;
    private double toan, ly, hoa;

    public ThiSinh1(String id, String name, double toan, double ly, double hoa) {
        this.id = id;
        this.name = name;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }

    public String getUutien() {
        String res = this.id.substring(0, 3);
        if (res.equals("KV1")) {
            return "0.5";
        } else if (res.equals("KV2")) {
            return "1";
        }
        return "2.5";
    }

    public String getTongDiem() {
        double res = this.toan * 2 + this.ly + this.hoa + Double.parseDouble(this.getUutien());
        if (res == (int) res) {
            return Integer.toString((int) res);
        }
        return Double.toString(res);
    }

    public String formatName() {
        String ans = "";
        String a[] = this.name.trim().split("\\s+");
        for (String x : a) {
            ans += Character.toUpperCase(x.charAt(0));
            for (int j = 1; j < x.length(); j++) {
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }

    @Override
    public String toString() {
        return this.id + " " + this.formatName() + " " + this.getUutien() + " " + this.getTongDiem();
    }
}

public class DanhSachTrungTuyen {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("THISINH.in"));
        int n = sc.nextInt();
        ThiSinh1[] ds = new ThiSinh1[n];
        for (int i = 0; i < n; i++) {
            sc.nextLine();
            ds[i] = new ThiSinh1(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds, new Comparator<ThiSinh1>() {
            @Override
            public int compare(ThiSinh1 a, ThiSinh1 b) {
                double p1 = Double.parseDouble(a.getTongDiem());
                double p2 = Double.parseDouble(b.getTongDiem());
                if (p1 > p2){
                    return -1;
                }
                return 1;
            }

        });
        int chiTieu = sc.nextInt();
        double diemChuan = 0;
        for (ThiSinh1 x : ds) {
            diemChuan = Double.parseDouble(x.getTongDiem());
            chiTieu--;
            if (chiTieu == 0) {
                break;
            }
        }
        System.out.println(String.format("%.1f", diemChuan));
        for (ThiSinh1 x : ds) {
            System.out.print(x + " ");
            if (Double.parseDouble(x.getTongDiem()) >= diemChuan) {
                System.out.println("TRUNG TUYEN");
            } else {
                System.out.println("TRUOT");
            }
        }
    }
}
