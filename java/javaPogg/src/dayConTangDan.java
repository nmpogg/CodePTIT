import java.util.*;
import java.io.*;

public class dayConTangDan {
    public static int n;
    public static int[] a = new int[20];
    public static int[] X = new int[20];
    public static ArrayList<String> ans = new ArrayList<>();
    
    public static boolean check(){
        ArrayList<Integer> res = new ArrayList<>();
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(X[i] == 1){
                res.add(a[i]);
                cnt++;
            }
        }
        if(cnt < 2) return false;
        for(int i = 0; i < res.size()-1; i++){
            if(res.get(i) > res.get(i+1)) return false;
        }
        return true;
    }
    public static void Try(int i){
        for(int j = 0; j <= 1; j++){
            X[i] = j;
            if(i == n-1){
                if(check()){
                    String res = "";
                    for(int k = 0; k < n; k++){
                        if(X[k] == 1){
                            res += String.valueOf(a[k]);
                            res += " ";
                        }
                    }
                    ans.add(res);
                }
            }
            else Try(i+1);
        }
    }
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DAYSO.in"));
        n = sc.nextInt();
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        Try(0);
        Collections.sort(ans);
        for(String x : ans){
            System.out.println(x);
        }
    }
}
