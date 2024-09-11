import java.util.*;

public class DanhSachGiangVienTheoBoMon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        GiangVien[] ds = new GiangVien[n];
        for(int i = 0; i < n; i++){
            ds[i] = new GiangVien(i+1, sc.nextLine(), sc.nextLine());
        }
        int q = sc.nextInt();
        sc.nextLine();
        while(q-- > 0){
            String s = sc.nextLine();
            System.out.println("DANH SACH GIANG VIEN BO MON " + GiangVien.vietTat(s) +":");
            for(int i = 0; i < n; i++){
                if(ds[i].getMon().equals(s)) System.out.println(ds[i]);
            }
        }
    }
}
/*
3
Nguyen Manh Son
Cong nghe phan mem
Vu Hoai Nam
Khoa hoc may tinh
Dang Minh Tuan
An toan thong tin
1
Cong nghe phan mem
*/