import java.util.*;

public class SapXepTheoMaSinhVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<SinhVien4> ds = new ArrayList<>();
        while(sc.hasNext()){
            SinhVien4 x = new SinhVien4(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<SinhVien4>(){
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
/*
B16DCCN011
Nguyen Trong Duc Anh
D16CNPM1
sv1@stu.ptit.edu.vn
B15DCCN215
To Ngoc Hieu
D15CNPM3
sv2@stu.ptit.edu.vn
B15DCKT150
Nguyen Ngoc Son
D15CQKT02-B
sv3@stu.ptit.edu.vn
B15DCKT199
Nguyen Trong Tung
D15CQKT03-B
sv4@stu.ptit.edu.vn
*/