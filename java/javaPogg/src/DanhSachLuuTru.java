import java.util.*;
import java.io.*;

public class DanhSachLuuTru {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new File("KHACH.in"));
        int n = sc.nextInt();
        sc.nextLine();
        KhachHang[] ds = new KhachHang[n];
        for(int i = 0; i < n; i++){
            ds[i] = new KhachHang(i+1, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds, new Comparator<KhachHang>(){
            @Override
            public int compare(KhachHang t, KhachHang t1) {
               return t1.getDays() - t.getDays();
            }
            
        });
        for(KhachHang x : ds) System.out.println(x);
    }
}
