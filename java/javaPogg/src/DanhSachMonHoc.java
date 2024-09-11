import java.util.*;
import java.io.*;

public class DanhSachMonHoc {
    public static void main(String[] args) {
        try{
            File file = new File("MONHOC.in");
            Scanner sc = new Scanner(file);
            int n = sc.nextInt();
            ArrayList<MonHoc> danhSach = new ArrayList<>();
            for(int i = 0; i < n; i++){
                sc.nextLine();
                MonHoc x = new MonHoc(sc.nextLine(), sc.nextLine(), sc.nextInt());
                danhSach.add(x);
            }
            Collections.sort(danhSach, new Comparator<MonHoc>(){
                @Override
                public int compare(MonHoc t, MonHoc t1) {
                    return t.getTen().compareTo(t1.getTen());
                }   
            });
            for(MonHoc x : danhSach){
                System.out.println(x);
            }
        } catch(Exception e){};
    }
}
