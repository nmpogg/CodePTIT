import java.util.*;
        
public class diaChiEmail {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        HashMap<String, Integer> map = new HashMap<>();
        while(t-- > 0){
            String s = sc.nextLine().trim();
            String[] a = s.split("\\s+");
            String ans = "";
            ans += a[a.length-1].toLowerCase();
            for(int i = 0; i < a.length-1; i++){
                ans += Character.toLowerCase(a[i].charAt(0));
            }
            if(map.containsKey(ans)){
                int freq = map.get(ans);
                map.put(ans, freq+1);
            }
            else map.put(ans, 1);
            if(map.get(ans) > 1) ans += map.get(ans);
            ans += "@ptit.edu.vn";
            System.out.println(ans);
        }
    }
}
