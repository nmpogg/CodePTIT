import java.util.Scanner;

public class boiSoChungNhoNhatNSo {
    public static long gcd(long a, long b){
        if(a == 0) return b;
        return gcd(b % a, a);
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            long ans = 1;
            for(long i = 2; i <= n; i++){
                ans = ans * i /gcd(ans, i);
            }
            System.out.println(ans);
        }
    }
}
