import java.math.*;
import java.util.*;

public class timSoDu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        BigInteger one = new BigInteger("1");
        BigInteger two = new BigInteger("2");
        BigInteger three = new BigInteger("3");
        BigInteger four = new BigInteger("4");
        while(t-- > 0){
            int n = sc.nextInt();  
            BigInteger ans = one.pow(n).add(two.pow(n)).add(three.pow(n)).add(four.pow(n));
            ans.remainder(new BigInteger("5"));
            System.out.println(ans);
        }
    }
}
