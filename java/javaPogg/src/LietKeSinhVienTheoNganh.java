import java.util.*;

public class LietKeSinhVienTheoNganh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        SinhVien4[] ds = new SinhVien4[n];
        for(int i = 0; i < n; i++){
            ds[i] = new SinhVien4(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        int q = sc.nextInt();
        sc.nextLine();
        while(q-- > 0){
            String s = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN NGANH " + s.toUpperCase() + ":");
            if(s.equals("Ke toan")){
                s = "DCKT";
            }
            else if(s.equals("Cong nghe thong tin")) s = "DCCN";
            else if(s.equals("An toan thong tin")) s = "DCAT";
            else if(s.equals("Vien thong")) s = "DCVT";
            else s = "DCDT";
            for(SinhVien4 x : ds){
                if(x.getID().substring(3, 7).equals(s)){
                    if(s.equals("DCCN") || s.equals("DCAT")){
                        if(x.getLop().charAt(0) != 'E') System.out.println(x); 
                    }
                    else System.out.println(x);
                }
            }
        }
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
D15CQKT02-B
sv4@stu.ptit.edu.vn
1
Ke toan
*/