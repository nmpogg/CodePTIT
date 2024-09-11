import java.util.*;

public class khaiBaoLopThiSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        String date = sc.nextLine();
        double diem1 = sc.nextDouble();
        double diem2 = sc.nextDouble();
        double diem3 = sc.nextDouble();
        ThiSinh a = new ThiSinh(s, date, diem1, diem2, diem3);
        System.out.println(a);
        
    }
}
