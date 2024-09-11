import java.util.Scanner;

public class maTranNhiPhan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a = new int[n][3];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 3; j++) a[i][j] = sc.nextInt();
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int[] cnt = new int[2];      
            for(int j = 0; j < 3; j++){
                cnt[a[i][j]]++;
            }
            if(cnt[0] < cnt[1]) ans++;
        }
        System.out.println(ans);
    }
}
