import java.util.*;

class SinhVien3{
    private String maSV, hoTen, lop, ghiChu = "";
    private int cc;

    public SinhVien3(String maSV, String hoTen, String lop) {
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
    }

    public String getLop() {
        return lop;
    }
    
    public void setDiemChuyenCan(String s){
        int diem = 10;
        for(char c : s.toCharArray()){
            if(c == 'v') diem -= 2;
            else if(c == 'm') diem -= 1;
        }
        this.cc = Math.max(0, diem);
        if(diem <= 0) this.ghiChu = "KDDK";
    }
    @Override
    public String toString(){
        return this.maSV + " " + this.hoTen + " " + this.lop + " " + this.cc + " " + this.ghiChu;
    }
}

public class DiemDanh1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien3[] ds = new SinhVien3[n];
        HashMap<String, SinhVien3> map = new HashMap<>();
        for(int i = 0; i < n; i++){
            String msv = sc.nextLine();
            ds[i] = new SinhVien3(msv, sc.nextLine(), sc.nextLine());
            map.put(msv, ds[i]);
        }
        for(int i = 0; i < n; i++){
            String msv = sc.next();
            String dd = sc.next();
            map.get(msv).setDiemChuyenCan(dd);
        }
        for(SinhVien3 x : ds){
            System.out.println(x);
        }        
    }
}
/*
3
B19DCCN999
Le Cong Minh
D19CQAT02-B
B19DCCN998
Tran Truong Giang
D19CQAT02-B
B19DCCN997
Nguyen Tuan Anh
D19CQCN04-B
B19DCCN998 xxxmxmmvmx
B19DCCN997 xmxmxxxvxx
B19DCCN999 xvxmxmmvvm
*/