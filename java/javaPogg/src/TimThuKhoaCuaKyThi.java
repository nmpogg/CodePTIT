import java.util.*;

public class TimThuKhoaCuaKyThi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<ThiSinh> arr = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            ThiSinh x = new ThiSinh(sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble(), sc.nextDouble());
            arr.add(x);
        }
        double ans = 0;
        for(ThiSinh x : arr){
            ans = Math.max(ans, x.getPoint());
        }
        for(ThiSinh x : arr){
            if(x.getPoint() == ans){
                System.out.println(x);
            }
        }
    }
}
/*
3
Nguyen Van A
12/12/1994
3.5
7.0
5.5
Nguyen Van B
1/9/1994
7.5
9.5
9.5
Nguyen Van C
6/7/1994
8.5
9.5
8.5
*/