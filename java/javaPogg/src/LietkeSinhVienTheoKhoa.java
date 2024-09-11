import java.util.*;

public class LietkeSinhVienTheoKhoa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien4[] ds = new SinhVien4[n];
        for(int i = 0; i < n; i++){
            ds[i] = new SinhVien4(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        int q = sc.nextInt();
        while(q-- > 0){
            String s = sc.next();
            System.out.println("DANH SACH SINH VIEN KHOA " + s + ":");
            for(SinhVien4 x : ds){
                if(x.getLop().substring(1, 3).equals(s.substring(2))){
                    System.out.println(x);
                }
            }
        }
    }
}