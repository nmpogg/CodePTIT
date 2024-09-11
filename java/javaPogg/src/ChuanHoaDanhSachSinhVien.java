import java.util.*;
import java.io.*;

public class ChuanHoaDanhSachSinhVien {
    public static void main(String[] args) throws Exception{
        Scanner sc = new Scanner(new File("C:\\Users\\Cuong\\Desktop\\file.txt"));
        int n = sc.nextInt();
        SinhVien2[] ds = new SinhVien2[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new SinhVien2(i+1, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
        }
        for(SinhVien2 x : ds){
            System.out.println(x);
        }
    }
}
