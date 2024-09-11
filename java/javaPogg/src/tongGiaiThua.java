import java.util.Scanner;

public class tongGiaiThua {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        long res = 1, ans = 0;
        for(int i = 1; i <= n; i++){
            res *= i;
            ans += res;
        }
        System.out.println(ans);
    }
}
