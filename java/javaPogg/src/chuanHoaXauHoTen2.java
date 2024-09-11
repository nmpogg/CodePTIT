import java.util.*;

public class chuanHoaXauHoTen2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine().trim();
            String[] a = s.split("\\s+");
            String ans = "";
            for(int i = 1; i < a.length; i++){
                ans += Character.toUpperCase(a[i].charAt(0));
                for(int j = 1; j < a[i].length(); j++){
                    ans += Character.toLowerCase(a[i].charAt(j));
                }
                if(i != a.length-1) ans += " ";
            }
            ans += ", ";
            ans += a[0].toUpperCase();
            System.out.println(ans);
        }
    }
}
