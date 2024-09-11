import java.util.*;

public class SapXepSinhVienTheoLop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        ArrayList<SinhVien4> ds = new ArrayList<>();
        for(int i = 0; i < n; i++){
            SinhVien4 x = new SinhVien4(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<SinhVien4>(){
            @Override
            public int compare(SinhVien4 a, SinhVien4 b) {
                if(a.getLop().compareTo(b.getLop()) != 0) return a.getLop().compareTo(b.getLop());
                return a.getID().compareTo(b.getID());
            }
            
        });
        for(SinhVien4 x : ds) System.out.println(x);
    }
}
/*
4
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