import java.util.*;

public class dayUuThe {
    public static boolean isEven(String s){
        if((s.charAt(s.length() - 1) - '0') % 2 == 0) return true;
        return false;
    }
    
    public static boolean isUuThe(String s){
        String[] a = s.split("\\s+");
        int even = 0, odd = 0;
        for(String x : a){
            if(isEven(x)) even++;
            else odd++;
        }
        if(a.length % 2 == 0 && even > odd) return true;
        if(a.length % 2 == 1 && odd  > even) return true;
        return false;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            if(isUuThe(s)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
