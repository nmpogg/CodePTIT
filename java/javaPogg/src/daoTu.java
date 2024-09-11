import java.util.*;

public class daoTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            String[] a = s.split("\\s+");
            for(String x : a){
                StringBuilder sb = new StringBuilder(x);
                System.out.print(sb.reverse() + " ");
            }
            System.out.println("");
        }
    }
}
