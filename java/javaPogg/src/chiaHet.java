import java.math.BigInteger;
import java.util.*;

public class chiaHet {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();
            BigInteger n1 = new BigInteger(a);
            BigInteger n2 = new BigInteger(b);
            if(n1.remainder(n2).equals(BigInteger.ZERO) || n2.remainder(n1).equals(BigInteger.ZERO)){
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
    }
}
