import java.util.*;

public class HinhSao {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer>[] a = new ArrayList[n+1];
        for(int i = 1; i <= n; i++){
            a[i] = new ArrayList<>();
        }
        for(int i = 1; i <= n-1; i++){
            int x = sc.nextInt();
            int y = sc.nextInt();
            a[x].add(y);
            a[y].add(x);
        }
        boolean flag = true;
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            if(a[i].size() == n-1) cnt++;
            else if(a[i].size() > 1 || cnt > 1){
                System.out.println("No");
                flag = false;
                break;
            }
        }
        if(flag) System.out.println("Yes");
    }
}
