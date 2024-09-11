import java.util.Scanner;

public class lietLeToHop {
    static int n, k, cnt = 0;
    static int[] X = new int[11];
    public static void Try(int i){
        for(int j = X[i-1] + 1; j <= n-k+i; j++){
            X[i] = j;
            if(i == k){
                cnt++;
                for(int l = 1; l <= k; l++) System.out.print(X[l]);
                System.out.print(" ");
            }
            else Try(i+1);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        Try(1);
        System.out.println("\nTong cong co " + cnt + " to hop");
    }
}
