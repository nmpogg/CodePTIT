import java.util.*;

public class tapTuRiengCuaHaiXau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            String[] a = s1.split("\\s+");
            String[] b = s2.split("\\s+");
            TreeSet<String> ans = new TreeSet<>();
            for(String x : a){
                boolean find = false;
                for(String y : b){
                    if(x.equals(y)){
                        find = true;
                        break;
                    }
                }
                if(find == false) ans.add(x);
            }
            for(String x : ans){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
