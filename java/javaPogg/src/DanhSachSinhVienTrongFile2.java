import java.util.*;
import java.io.*;

public class DanhSachSinhVienTrongFile2 {
    public static void main(String[] args) {
        try{
            File file = new File("SV.in");
            Scanner sc = new Scanner(file);
            int n = sc.nextInt();
            for(int i = 1; i <= n; i++){
                sc.nextLine();
                SinhVien2 x = new SinhVien2(i, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextDouble());
                System.out.println(x);
            }
        } catch(Exception e){};
    }
}
