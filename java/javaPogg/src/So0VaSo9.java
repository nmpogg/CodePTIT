import java.util.*;

public class So0VaSo9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            Queue<Long> q = new LinkedList<>();
            q.offer((long)9);
            while(true){
                long top = q.peek();
                q.poll();
                if(top % n == 0){
                    System.out.println(top);
                    break;
                }
                q.offer(top * 10);
                q.offer(top * 10 + 9);
            } 
        }
    }
}