import java.util.*;

public class thuGonDaySo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        Stack<Integer> st = new Stack<>();
        for(int i = 0; i < n; i++){
            if(!st.isEmpty() && (st.peek() + a[i]) % 2 == 0){
                st.pop();
            }
            else st.push(a[i]);
        }
        System.out.println(st.size());
    }
}
