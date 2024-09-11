import java.util.Arrays;
import java.util.Scanner;

public class dayConCoKPhanTuTangDan {
    public static int n, k;
    public static int[] a = new int[16];
    public static int[] X = new int[16];

    
    public static void Try(int i){
        for(int j = X[i-1]+1; j <= n-k+i; j++){
            X[i] = j;
            if(i == k){
                for(int l = 1; l <= k; l++) System.out.print(a[X[l]] + " ");
                System.out.println("");
            }
            else Try(i+1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            n = sc.nextInt();
            k = sc.nextInt();
            for(int i = 1; i <= n; i++){
                a[i] = sc.nextInt();
            }
            Arrays.sort(a, 1, n+1);
            Try(1);
        }
    }
}
