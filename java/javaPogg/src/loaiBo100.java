import java.util.Scanner;
import java.util.Stack;

public class loaiBo100 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            String s = sc.next();
            char[] arr = s.toCharArray();
            Stack<Character> st = new Stack<>();
            int ans = 0;
            for(int i = 0; i < arr.length-1; i++){
                if(!st.isEmpty() && st.peek() == '1'){
                    if(arr[i] == '0' && arr[i+1] == '0'){
                        st.pop();
                        i += 2;
                        ans += 3;
                    }
                }
                else st.push(arr[i]);
            }
            System.out.println(ans);
        }
    }
}
