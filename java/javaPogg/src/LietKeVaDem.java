import java.util.*;

public class LietKeVaDem {
    public static boolean check(int n){
        String s = Integer.toString(n);
        for(int i = 0; i < s.length()-1; i++){
            if(s.charAt(i) > s.charAt(i+1)) return false;
        }
        return true;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> arr = new ArrayList<>();
        HashMap<Integer, Integer> map = new HashMap<>();
//        int cnt = 0;
        while(sc.hasNextInt()){
            int n = sc.nextInt();
            if(check(n)){
                arr.add(n);
                if(map.containsKey(n)){
                    map.put(n, map.get(n)+1);
                }
                else map.put(n, 1);
            }
//            cnt++;
//            if(cnt == 35) break;
        }
        Collections.sort(arr, new Comparator<Integer>(){
            @Override
            public int compare(Integer t, Integer t1) {
                return map.get(t1) - map.get(t);
            }
            
        });
        for(int x : arr){
            if(map.get(x) != 0){
                System.out.println(x + " " + map.get(x));
                map.put(x, 0);
            }
        }
    }
}
