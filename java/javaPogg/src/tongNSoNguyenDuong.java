import java.util.Scanner;

public class tongNSoNguyenDuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            System.out.println(1L * n * (n+1) / 2);
        }
    }
}
