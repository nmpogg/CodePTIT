import java.util.*;

class GiaoVien{
    private String id, chucVu;
    private int heSo;
    private String name;
    private long luongCoBan, phuCap;
    
    GiaoVien(String id, String name, long luongCoBan){
        this.id = id;
        this.chucVu = id.substring(0, 2);
        this.heSo = Integer.parseInt(id.substring(2));
        this.name = name;
        this.luongCoBan = luongCoBan;
        if(this.chucVu.compareTo("HT") == 0) this.phuCap = 2000000;
        else if(this.chucVu.compareTo("HP")== 0) this.phuCap = 900000;
        else this.phuCap = 500000;
    }
    public String toString(){
        return id + " " + name + " " + heSo + " " + phuCap + " " + (luongCoBan * heSo + phuCap);
    }
}

public class tinhThuNhapGiaoVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        GiaoVien gv = new GiaoVien(sc.nextLine(), sc.nextLine(), sc.nextLong());
        System.out.println(gv);
    }
}
/*
HP04
Tran Quoc Huy
1578000
*/