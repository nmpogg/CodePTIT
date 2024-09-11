import java.util.Scanner;

public class soKhongLienKe {
    public static boolean check(long n){
        int sum = 0;
        long c = n % 10;
        sum += (int)c;
        n /= 10;
        while(n > 0){
            long res = n % 10;
            if(Math.abs(res - c) != 2) return false;
            sum += res;
            c = res;
            n /= 10;
        }
        if(sum % 10 != 0) return false;
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
