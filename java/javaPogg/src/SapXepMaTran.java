import java.io.File;
import java.io.FileNotFoundException;
import java.util.*;

public class SapXepMaTran {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("MATRIX.in"));
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int m = sc.nextInt();
            int idx = sc.nextInt();
            idx -= 1;
            int[][] a = new int[n][m];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = sc.nextInt();
                }
            }
            for(int i = 0; i < n-1; i++){
                for(int j = i+1; j < n; j++){
                    if(a[i][idx] > a[j][idx]){
                        int tmp = a[i][idx];
                        a[i][idx] = a[j][idx];
                        a[j][idx] = tmp;
                    }
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    System.out.print(a[i][j] + " ");
                }
                System.out.println("");
            }
        }
    }
}
