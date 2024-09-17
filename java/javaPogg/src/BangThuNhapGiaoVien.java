import java.util.*;

class GiaoVienXYZ{
    private String maNgach, hoTen;
    private int luongCoBan;

    public GiaoVienXYZ(String maNgach, String hoTen, int luongCoBan) {
        this.maNgach = maNgach;
        this.hoTen = hoTen;
        this.luongCoBan = luongCoBan;
}
    public int getHeSo(){
        return Integer.parseInt(this.maNgach.substring(2));
    }
    public int getPhuCap(){
        String res = this.getChucVu();
        if(res.equals("HT")) return 2000000;
        else if(res.equals("HP")) return 900000;
        return 500000;
    }
    public int getThuNhap(){
        return this.luongCoBan * this.getHeSo() + this.getPhuCap();
    }
    public String getChucVu(){
        return this.maNgach.substring(0, 2);
    }
    @Override
    public String toString(){
        return this.maNgach + " " + this.hoTen + " " + this.getHeSo() + " " + this.getPhuCap() + " " + this.getThuNhap();
    }
}

public class BangThuNhapGiaoVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        GiaoVienXYZ[] ds = new GiaoVienXYZ[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new GiaoVienXYZ(sc.nextLine(), sc.nextLine(), sc.nextInt());
        }
        int cHT = 0;
        int cHP = 0;
        for(GiaoVienXYZ x : ds){
            String chucVu = x.getChucVu();
            if(chucVu.equals("HT")){
                cHT++;
                if(cHT <= 1) System.out.println(x);
            }
            else if(chucVu.equals("HP")){
                cHP++;
                if(cHP <= 2) System.out.println(x);
            }
            else System.out.println(x);
        }
    }
}
/*
3
GV01
Nguyen Kim Loan
1420000
HT05
Hoang Thanh Tuan
1780000
GV02
Tran Binh Nguyen
1468000
*/