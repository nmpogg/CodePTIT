import java.util.*;
        
public class xauKhacNhauDaiNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String a1 = sc.next();
            String b1 = sc.next();
            String ans = "";
            char[] a = a1.toCharArray();
            char[] b = b1.toCharArray();
            for(int i = 0; i < a.length-1; i++){
                String res = " ";
                res += a[i];
                if(!b1.contains(res) && res.compareTo(ans) > 0){
                    ans = res;
                }
                for(int j = i+1; j < a.length; j++){
                    res += a[j];
                    if(!b1.contains(res) && res.compareTo(ans) > 0){
                        ans = res;
                    }
                }
            }
            for(int i = 0; i < b.length-1; i++){
                String res = " ";
                res += b[i];
                if(!a1.contains(res) && res.compareTo(ans) > 0){
                    ans = res;
                }
                for(int j = i+1; j < b.length; j++){
                    res += b[j];
                    if(!a1.contains(res) && res.compareTo(ans) > 0){
                        ans = res;
                    }
                }
            }
            if(ans.compareTo("") == 0) System.out.println("-1");
            else System.out.println(ans.length());
        }
    }
}
