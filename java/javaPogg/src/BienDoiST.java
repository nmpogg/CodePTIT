import java.util.*;

class TrangThai{
    private int value, count;

    public TrangThai(int value, int count) {
        this.value = value;
        this.count = count;
    }
    public int getValue(){
        return this.value;
    }
    public int getCount(){
        return count;
    }
}

public class BienDoiST {

    public static int solve(int s, int t){
        Queue<TrangThai> q = new LinkedList<>();
        HashSet<Integer> vst = new HashSet<>();
        q.offer(new TrangThai(s, 0));
        vst.add(s);
        while(!q.isEmpty()){
            TrangThai top = q.peek();
            q.poll();
            int x = top.getValue();
            if(x == t) return top.getCount();
            if(x > 1 && !vst.contains(x-1)){
                q.offer(new TrangThai(x-1, top.getCount()+1));
                vst.add(x-1);
            }
            if(x < t && !vst.contains(x*2)){
                q.offer(new TrangThai(x*2, top.getCount()+1));
                vst.add(x*2);
            }
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T-- > 0){
            int s = sc.nextInt();
            int t = sc.nextInt();
            System.out.println(solve(s, t));
        }
    }
}
