import java.util.*;

public class DanhSachDoanhNghiepNhanSinhVienThucTap1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        DoanhNghiep[] ds = new DoanhNghiep[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new DoanhNghiep(sc.nextLine(), sc.nextLine(), sc.nextInt());
        }
        Arrays.sort(ds, new Comparator<DoanhNghiep>(){
            @Override
            public int compare(DoanhNghiep a, DoanhNghiep b) {
                if(a.getNumSV() == b.getNumSV()) return a.getId().compareTo(b.getId());
                return b.getNumSV() - a.getNumSV();
            }
            
        });
        for(int i = 0; i < n; i++){
            System.out.println(ds[i]);
        }
    }
}
/*
4
VIETTEL
TAP DOAN VIEN THONG QUAN DOI VIETTEL
40
FSOFT
CONG TY TNHH PHAN MEM FPT - FPT SOFTWARE
300
VNPT
TAP DOAN BUU CHINH VIEN THONG VIET NAM
200
SUN
SUN*
50
*/