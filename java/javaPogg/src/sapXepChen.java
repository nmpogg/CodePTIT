import java.util.Scanner;

public class sapXepChen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        System.out.println("Buoc 0: " + a[0]);
        int k = 2;
        for(int i = 1; i < n; i++){
            int j = i - 1;
            int tmp = a[i];
            while(j >= 0 && a[j] > tmp){
                a[j+1] = a[j];
                j--;
            }
            a[j+1] = tmp;
            System.out.print("Buoc " + i + ": ");
            for(int x = 0; x < k; x++){
                System.out.print(a[x] + " ");
            }
            System.out.println("");
            k++;
        }
    }
}
