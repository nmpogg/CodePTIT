import java.util.*;

public class LuaChonThamLam {
    public static String findMin(int n, int s) {
        if (s == 0 && n == 1) return "0"; 
        if (s == 0 || s > 9 * n) return "-1";

        String ans = "";
        s--;
        
        for (int i = 0; i < n - 1; i++) {
            if (s > 9) {
                ans = "9" + ans;
                s -= 9;
            } else {
                ans = Integer.toString(s) + ans;
                s = 0;
            }
        }
        ans = Integer.toString(s + 1) + ans;

        return ans;
    }

    public static String findMax(int n, int s) {
        if (s == 0 && n == 1) return "0";
        if (s == 0 || s > 9 * n) return "-1";

        String ans = "";
        for (int i = 0; i < n; i++) {
            if (s >= 9) {
                ans += "9";
                s -= 9;
            } else {
                ans += Integer.toString(s);
                s = 0;
            }
        }

        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int s = sc.nextInt();

        if (s == 0 && n > 1) {
            System.out.println("-1 -1");
        } else {
            System.out.println(findMin(n, s) + " " + findMax(n, s));
        }
    }
}
