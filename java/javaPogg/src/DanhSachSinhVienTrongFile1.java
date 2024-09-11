import java.util.*;
import java.io.*;

public class DanhSachSinhVienTrongFile1 {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new File("SINHVIEN.in"));
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien4[] ds = new SinhVien4[n];
        for(int i = 0; i < n; i++){
            ds[i] = new SinhVien4(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds, new Comparator<SinhVien4>(){
            @Override
            public int compare(SinhVien4 t, SinhVien4 t1) {
                return t.getID().compareTo(t1.getID());
            }
        });
        for(SinhVien4 x : ds){
            System.out.println(x);
        }
    }
}
