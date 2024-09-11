import java.util.*;
import java.io.*;

public class DanhSachDoanhNghiep {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DN.in"));
        int n = sc.nextInt();
        DoanhNghiep[] ds = new DoanhNghiep[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new DoanhNghiep(sc.nextLine(), sc.nextLine(), sc.nextInt());
        }
        Arrays.sort(ds, new Comparator<DoanhNghiep>(){
            @Override
            public int compare(DoanhNghiep t, DoanhNghiep t1) {
                return t.getId().compareTo(t1.getId());
            }
            
        });
        for(DoanhNghiep x : ds){
            System.out.println(x);
        }
    }
}
