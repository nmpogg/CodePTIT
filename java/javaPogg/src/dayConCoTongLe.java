import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class dayConCoTongLe {
    public static int n;
    public static Integer[] a = new Integer[15];
    public static ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
    public static ArrayList<Integer> res = new ArrayList<>();
    
    public static void Try(int i, int pos, int sum){
        if(sum % 2 == 1){
            ArrayList<Integer> tmp = new ArrayList<>(res);
//            Collections.sort(tmp, new Comparator<Integer>(){
//                @Override
//                public int compare(Integer o1, Integer o2) {
//                    return o2 - o1;
//                }              
//            });
            ans.add(tmp);
        }
        for(int j = pos; j < n; j++){
            res.add(a[j]);
            Try(i+1, j+1, sum + a[j]);
            res.remove(res.size() - 1);
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            n = sc.nextInt();
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
            }
            int l = 0, r = n-1;
            while(l <= r){
                int tmp = a[l];
                a[l] = a[r];
                a[r] = tmp;
                l++; r--;
            }
            Try(0, 0, 0);
            Collections.sort(ans, new Comparator<ArrayList<Integer>>(){
                @Override
                public int compare(ArrayList<Integer> t1, ArrayList<Integer> t2) {
                    int len1 = t1.size();
                    int len2 = t2.size();
                    for(int i = 0; i < Math.min(len1, len2); i++){
                        if(t1.get(i) != t2.get(i)){
                            return t1.get(i) - t2.get(i);
                        }
                    }
                    return len1 - len2;
                }           
            });
            for(ArrayList<Integer> subset : ans){
                for(int num : subset){
                    System.out.print(num + " ");
                }
                System.out.println();
            }
            ans.clear();
        }
    }
}
