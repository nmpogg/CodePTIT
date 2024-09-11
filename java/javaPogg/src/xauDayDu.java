import java.util.*;

public class xauDayDu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            int k = sc.nextInt();
            HashMap<Character, Integer> map = new HashMap<>();
            for(int i = 0; i < s.length(); i++){
                if(map.containsKey(s.charAt(i))){
                    int freq = map.get(s.charAt(i));
                    map.put(s.charAt(i), freq+1);
                }
                else map.put(s.charAt(i), 1);
            }
            Set<HashMap.Entry<Character, Integer>> entrySet = map.entrySet();
            int cnt = 0;
            for(HashMap.Entry<Character, Integer> entry : entrySet){
                if(entry.getValue() > 1) cnt += entry.getValue() - 1;
            }
            if(map.size() + k < 26 || cnt < k){
                System.out.println("NO");
            }
            else System.out.println("YES");
        }
    }
}
