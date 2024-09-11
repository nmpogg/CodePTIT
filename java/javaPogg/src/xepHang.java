import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

public class xepHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Integer[][] a = new Integer[n][2];
        for(int i = 0; i < n; i++){
            a[i][0] = sc.nextInt(); 
            a[i][1] = sc.nextInt();
        }
        Arrays.sort(a, new Comparator<Integer[]>(){
            @Override
            public int compare(Integer o1[], Integer o2[]){
                return o1[0] - o2[0];
            }
        });
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(ans < a[i][0]) ans = a[i][0];
            ans += a[i][1];
        }
        System.out.println(ans);
    }
}
