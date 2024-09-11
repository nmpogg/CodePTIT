import java.math.*;
import java.util.*;

public class BoiSoChungNhoNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s1 = sc.next();
            String s2 = sc.next();
            BigInteger a = new BigInteger(s1);
            BigInteger b = new BigInteger(s2);
            BigInteger gcd = a.gcd(b);
            System.out.println(a.multiply(b).divide(gcd));
        }
    }
}
