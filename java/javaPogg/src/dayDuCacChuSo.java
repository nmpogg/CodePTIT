import java.math.BigInteger;
import java.util.*;

public class dayDuCacChuSo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            if(n == 0) System.out.println("Impossible");
            else{
                HashMap<Character, Integer> map = new HashMap<>();
                long i = 2, top = 0;
                String tmp = "" + n;
                for(char x : tmp.toCharArray()) map.put(x, 1);
                while(map.size() != 10){
                    top = 1l * n * (i++);
                    String res = "" + top;
                    for(char c : res.toCharArray()){
                        map.put(c, 1);
                    }
                }
                System.out.println(top);
            }
        }
    }
}
