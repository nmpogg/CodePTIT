import java.util.Scanner;

public class soXaCach {
    public static int n;
    public static int[] X = new int[11];
    public static boolean[] vst = new boolean[11];
    public static boolean check(int[] X){
        for(int i = 1; i < n; i++){
            if(Math.abs(X[i] - X[i+1]) == 1) return false;
        }
        return true;
    }
    public static void Try(int i){
        for(int j = 1; j <= n; j++){
            if(!vst[j]){
                X[i] = j;
                vst[j] = true;
                if(i == n){
                    if(check(X)){
                        for(int l = 1; l <= n; l++) System.out.print(X[l]);
                        System.out.println("");
                    }
                }
                else Try(i+1);
                vst[j] = false;
            }
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            n = sc.nextInt();
            Try(1);
        }
    }
}
