import java.util.Scanner;

public class soLienKe {
    public static boolean check (long n){
        long c = n % 10;
        n /= 10;
        while(n > 0){
            long res = n % 10;
            if(Math.abs(res - c) != 1) return false;
            c = res;
            n /= 10;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            long n = sc.nextLong();
            if(check(n)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
