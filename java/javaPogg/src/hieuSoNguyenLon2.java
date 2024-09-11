import java.math.BigInteger;
import java.util.*;

public class hieuSoNguyenLon2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s1 = sc.nextLine();
        String s2 = sc.nextLine();
        BigInteger n1 = new BigInteger(s1);
        BigInteger n2 = new BigInteger(s2);
        System.out.println(n1.subtract(n2));
    }
}
