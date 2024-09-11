import java.util.Scanner;

public class boiSoChungUocSoChung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int a = sc.nextInt();
            int b = sc.nextInt();
            long res = 1L * a * b;
            while(b != 0){        
                int tmp = a % b;
                a = b;
                b = tmp;
            }
            System.out.println(res / a + " " + a);
        }
    }
}
