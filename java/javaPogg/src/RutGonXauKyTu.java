import java.util.*;

public class RutGonXauKyTu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] a = sc.nextLine().toCharArray();
        Stack<Character> st = new Stack<>();
        for(char c : a){
            if(!st.empty() && st.peek() == c){
                st.pop();
            }
            else st.push(c);
        }
        if(st.empty()) System.out.println("Empty String");
        else{
            String ans = "";
            while(!st.empty()){
                ans += st.peek();
                st.pop();
            }
            StringBuilder sb = new StringBuilder(ans);
            System.out.println(sb.reverse());
        }
    }
}
