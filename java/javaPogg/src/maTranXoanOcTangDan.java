import java.util.*;

public class maTranXoanOcTangDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n*n];
        int[][] ans = new int[n][n];
        for(int i = 0; i < n*n; i++){
           a[i] = sc.nextInt();
        }
        Arrays.sort(a);
        int c1 = 0, h1 = 0, c2 = n-1, h2 = n-1;
        int cnt = 0;
        while(c1 <= c2 && h1 <= h2){
            for(int i = c1; i <= c2; i++){
                ans[h1][i] = a[cnt++];
            }
            h1++;
            for(int i = h1; i <= h2; i++){
                ans[i][c2] = a[cnt++];
            }
            c2--;
            for(int i = c2; i >= c1; i--){
                ans[h2][i] = a[cnt++];
            }
            h2--;
            for(int i = h2; i >= h1; i--){
                ans[i][c1] = a[cnt++];
            }
            c1++;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                System.out.print(ans[i][j] + " ");
            }
            System.out.println("");
        }
    }
}
