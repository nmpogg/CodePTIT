import java.util.*;
import java.io.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;

class KH implements Comparable<KH> {
    private String id, name, gt, ns, dc;

    public KH(int id, String name, String gt, String ns, String dc) {
        this.id = String.format("KH%03d", id);
        this.name = name;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
    }
    public String formatName(){
        String ans = "";
        String[] arr = this.name.trim().split("\\s+");
        for(String x : arr){
            ans += Character.toUpperCase(x.charAt(0));
            for(int j = 1; j < x.length(); j++){
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }
    public String formatNS(){
        StringBuilder sb = new StringBuilder(this.ns);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/') sb.insert(3, "0");
        return sb.toString();
    }

    @Override
    public int compareTo(KH o) {
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        LocalDate a = LocalDate.parse(this.formatNS(), formatter);
        LocalDate b = LocalDate.parse(o.formatNS(), formatter);
        return a.compareTo(b);
    }
    @Override
    public String toString(){
        return this.id + " " + this.formatName() + " " + this.gt + " " + this.dc + " " + this.formatNS();
    }
}

public class DanhSachKhachHangTrongFile {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int n = sc.nextInt();
        sc.nextLine();
        KH[] ds = new KH[n];
        for(int i = 0; i < n; i++){
            ds[i] = new KH(i+1, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds);
        for(KH x : ds){
            System.out.println(x);
        }
    }
}
