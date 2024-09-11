import java.util.Scanner;

public class voChai {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int ans = n/28, voChai = ans;
        while(voChai >= 3){
            int res = voChai/3;
            ans += res;
            voChai %= 3;
            voChai += res;
        }
        System.out.println(ans);
    }
}