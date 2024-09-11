import java.math.BigInteger;
import java.util.*;
        
public class hieuSoNguyenLon1 {
    public static void main(String[] args) {
        Scanner sc  = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s1 = sc.next();
            String s2 = sc.next();
            int len = Math.max(s1.length(), s2.length());
            BigInteger n1 = new BigInteger(s1);
            BigInteger n2 = new BigInteger(s2);
            if(n1.compareTo(n2) < 0){
                BigInteger ans = n2.subtract(n1);
                String res = ans.toString();
                int cnt = len - res.length();
                while(cnt-- > 0){
                    System.out.print('0');
                }
                System.out.println(ans);
            }
            else{
                BigInteger ans = n1.subtract(n2);
                String res = ans.toString();
                int cnt = len - res.length();
                while(cnt-- > 0){
                    System.out.print('0');
                }
                System.out.println(ans);
            }
        }
    }
}
