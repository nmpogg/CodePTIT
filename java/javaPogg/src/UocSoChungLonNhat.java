import java.util.*;

public class UocSoChungLonNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for(int i = 0; i < n; i++) a[i] = sc.nextInt();
            int[] b = new int[n+1];
            b[0] = a[0];
            for(int i = 1; i < n+1; i++){
                for(int j = a[i-1]+1;;j++){
                    if(j % b[i-1] == 0){
                        b[i] = j;
                        break;
                    }
                }
            }
            for(int x : b){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
