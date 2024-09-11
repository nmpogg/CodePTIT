import java.util.*;
import java.io.*;

public class DanhSachSanPham2 {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("SANPHAM.in"));
        int n = sc.nextInt();
        SanPham[] ds = new SanPham[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SanPham(sc.nextLine(), sc.nextLine(), sc.nextInt(), sc.nextInt());
        }
        Arrays.sort(ds, new Comparator<SanPham>(){
            @Override
            public int compare(SanPham a, SanPham b) {
                if(a.getPrice() != b.getPrice()) return b.getPrice() - a.getPrice();
                return a.getId().compareTo(b.getId());
            }
            
        });
        for(SanPham x : ds){
            System.out.println(x);
        }
    }
}
