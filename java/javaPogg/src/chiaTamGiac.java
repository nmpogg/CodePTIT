import java.util.Scanner;

public class chiaTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int t = 0; t < T; t++){
            int n = sc.nextInt();
            int h = sc.nextInt();
            for (int i = 1; i < n; i++) {
                double hi = h * Math.sqrt((double) i / n);
                System.out.printf("%.6f ", hi);
            }
            System.out.println();
        }
    }
}
