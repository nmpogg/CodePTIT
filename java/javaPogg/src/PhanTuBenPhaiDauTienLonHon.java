import java.util.*;

public class PhanTuBenPhaiDauTienLonHon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for(int i = 0; i < n; i++){
                a[i] = sc.nextInt();
            }
            Stack<Integer> st = new Stack<>();
            int[] r = new int[n];
            for(int i = 0; i < n; i++){
                if(st.empty()) st.push(i);
                else{
                    while(!st.empty() && a[st.peek()] < a[i]){
                        r[st.peek()] = a[i];
                        st.pop();
                    }
                    st.push(i);
                }
            }
            while(!st.empty()){
                r[st.peek()] = -1;
                st.pop();
            }
            for(int x : r){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
