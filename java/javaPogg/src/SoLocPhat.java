import java.util.*;

public class SoLocPhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            ArrayList<String> a = new ArrayList<>();
            Queue<String> q = new LinkedList<>();
            q.offer("6");
            q.offer("8");
            while(q.peek().length() <= n){
                String top = q.peek();
                q.poll();
                a.add(top);
                q.offer(top + '6');
                q.offer(top + '8');
            }
            Collections.reverse(a);
            System.out.println(a.size());
            for(String x : a){
                System.out.print(x + " ");
            }
            System.out.println("");
        }
    }
}
