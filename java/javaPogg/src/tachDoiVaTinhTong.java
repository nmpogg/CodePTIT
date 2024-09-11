import java.math.BigInteger;
import java.util.*;
import java.io.*;

public class tachDoiVaTinhTong {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("DATA.in"));
        String s = sc.next();
        while(s.length() != 1){
            BigInteger n1 = new BigInteger(s.substring(0, s.length()/2));
            BigInteger n2 = new BigInteger(s.substring(s.length()/2, s.length()));
            s = n2.add(n1).toString();
            System.out.println(s);
        }
    }
}
