import java.util.*;

public class KiemTraDayNgoacDung {
    public static boolean check(String s){
        Stack<Character> st = new Stack<>();
        for(char c : s.toCharArray()){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            }
            else if(!st.empty()){
                switch (c) {
                    case ')':
                        if(st.peek() == '('){
                            st.pop();
                        }
                        else return false;
                        break;
                    case ']':
                        if(st.peek() == '['){
                            st.pop();
                        }
                        else return false;
                        break;
                    default:
                        if(st.peek() == '{'){
                            st.pop();
                        }
                        else return false;
                        break;
                }
            }
            else return false;
        }
        return st.isEmpty();
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            if(check(s)) System.out.println("YES");
            else System.out.println("NO");
        }
    }
}
