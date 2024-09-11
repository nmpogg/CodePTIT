import java.util.Scanner;
import java.util.Arrays;

public class hopCuaHaiDaySO {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n+m];
        int[] b = new int[1000];
        for(int i = 0; i < n + m; i++){
            a[i] = sc.nextInt();
            b[a[i]] = 1;
        }
        Arrays.sort(a);
        for(int i = 0; i < n + m; i++){
            if(b[a[i]] == 1){
                System.out.print(a[i] + " ");
                b[a[i]] = 0;
            }
        }
    }
}
