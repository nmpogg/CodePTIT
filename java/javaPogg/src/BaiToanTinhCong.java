import java.util.*;

class NhanVien{
    private String id, name, chucVu;
    private int luongCoBan, days, salary, phuCap, thuong;
    public NhanVien(String id, String name, int luongCoBan, int days, String chucVu) {
        this.id = id;
        this.name = name;
        this.chucVu = chucVu;
        this.luongCoBan = luongCoBan;
        this.days = days;
        if(this.chucVu.equals("GD")) this.phuCap = 250000;
        else if(this.chucVu.equals("PGD")) this.phuCap = 200000;
        else if(this.chucVu.equals("TP")) this.phuCap = 180000;
        else this.phuCap = 150000;
        this.salary = this.luongCoBan * this.days;   
        if(this.days >= 25) this.thuong = this.salary * 20 / 100;
        else if(this.days >= 22) this.thuong = this.salary * 10 / 100;
        else this.thuong = 0;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.salary + " " + this.thuong + " " + this.phuCap + " " + (this.salary + this.thuong + this.phuCap);
    }
}

public class BaiToanTinhCong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        NhanVien x = new NhanVien("NV01", sc.nextLine(), sc.nextInt(), sc.nextInt(), sc.next());
        System.out.println(x);
    }
}
/*
Bui Thi Trang
45000
23
PGD
*/