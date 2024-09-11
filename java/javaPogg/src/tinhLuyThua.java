import java.util.Scanner;
        
public class tinhLuyThua {
    public static int MOD = 1000000000 + 7;
    public static long binpow(long a, long b){
        if(b == 0) return 1;
        long x = binpow(a, b / 2);
        if(b % 2 == 1) return (((x * x) % MOD) * (a % MOD)) % MOD;
        else return (x * x) % MOD;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
            long a = sc.nextLong();
            long b = sc.nextLong();
            if((a == 0 && b == 0)) break;
            System.out.println(binpow(a, b));
        } 
    }
}
