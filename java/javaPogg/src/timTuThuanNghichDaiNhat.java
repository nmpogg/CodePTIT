import java.util.*;

public class timTuThuanNghichDaiNhat {
    public static boolean check(String s){
        int n = s.length();
        for(int i = 0; i < n; i++){
            if(s.charAt(i) != s.charAt(n-i-1)) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        HashMap<String, Integer> map = new HashMap<>();
        String ans = "";
        ArrayList<String> input = new ArrayList<>();
        while(sc.hasNext()){
            String s = sc.next();
            if(check(s)){
                if(s.length() > ans.length()){
                    ans = s;
                }
                if(map.containsKey(s)){
                    int freq = map.get(s);
                    map.put(s, freq+1);
                }
                else{
                    map.put(s, 1);
                    input.add(s);
                }
            }
        }
        Set<HashMap.Entry<String, Integer>> entrySet = map.entrySet();
        for(String x : input){
            if(x.length() == ans.length()){
                System.out.print(x + " " + map.get(x) + " ");
            }
        }
        //System.out.println(map.get(ans));
    }
}
