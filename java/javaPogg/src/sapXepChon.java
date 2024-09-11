import java.util.Scanner;

public class sapXepChon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        for(int i = 0; i < n-1; i++){
            System.out.print("Buoc " + (i+1) + ": ");
            int idx = i, x = a[i];
            for(int j = i+1; j < n; j++){
                if(a[j] < x){
                    idx = j;
                    x = a[j];
                }
            }
            int tmp = a[i];
            a[i] = a[idx];
            a[idx] = tmp;
            for(int j = 0; j < n; j++){
                System.out.print(a[j] + " ");
            }
            System.out.println("");
        }
    }
}
