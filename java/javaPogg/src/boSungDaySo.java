import java.util.Scanner;

public class boSungDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        int x = 1;
        boolean flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] != x){
                flag = false;
                while(x != a[i]){
                    System.out.println(x);
                    x++;
                }
                x++;
            }
            else x++;
        }
        if(flag) System.out.println("Excellent!");
    }
}
