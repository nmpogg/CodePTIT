import java.util.*;

public class PH {
    private String id, name, ns;
    private double diemLyThuyet, diemThucHanh;

    public PH(int id,String name, String ns, double diemLyThuyet, double diemThucHanh) {
        this.id = String.format("PH%02d", id);
        this.name = name;
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/') sb.insert(3, "0");
        this.ns = sb.toString();
        this.diemLyThuyet = diemLyThuyet;
        this.diemThucHanh = diemThucHanh;
    }
    public String formatName(){
        String ans = "";
        String a[] = this.name.trim().split("\\s+");
        for(String x : a){
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
    public int getTuoi(){
        return 2021 - Integer.parseInt(this.ns.substring(6));
    }
    public double getDiemThuong(){
        if(this.diemLyThuyet >= 8 && this.diemThucHanh >= 8) return 1;
        else if(this.diemLyThuyet >= 7.5 && this.diemThucHanh >= 7.5) return 0.5;
        return 0;
    }
    public long getDiemTong(){
        return Math.min(10, Math.round((this.diemLyThuyet + this.diemThucHanh) / 2 + this.getDiemThuong()));
    }
    public String getXepLoai(){
        if(this.getDiemTong() >= 9) return "Xuat sac";
        else if(this.getDiemTong() >= 8) return "Gioi";
        else if(this.getDiemTong() >= 7) return "Kha";
        else if(this.getDiemTong() >= 5) return "Trung binh";
        else return "Truot";
    }
    @Override
    public String toString(){
        return this.id + " " + this.formatName() + " " + this.getTuoi() + " " +
        this.getDiemTong() + " " + this.getXepLoai();
    }
}
