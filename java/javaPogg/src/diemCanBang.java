import java.util.Scanner;

public class diemCanBang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            int sumRight = 0;
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
                sumRight += a[i];
            }
            int sumLeft = 0;
            int idx = -1;
            for(int i = 0; i < n; i++){
                sumRight -= a[i];
                if(sumLeft == sumRight){
                    idx = i + 1;
                    break;
                }
                sumLeft += a[i];
            }
            System.out.println(idx);
        }
    }
}
