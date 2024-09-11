import java.util.*;

class Pair{
    private int[] arr;
    private int count;

    public Pair(int[] arr, int count) {
        this.arr = arr;
        this.count = count;
    }
    
    public int[] getArr(){
        return this.arr;
    }
    public int getCount(){
        return this.count;
    }
}

public class QuayHinhVuong{
    public static int[] left(int[] a){
        int[] b = new int[6];
        b[2] = a[2];
	b[5] = a[5];
	b[0] = a[3];
	b[1] = a[0];
	b[3] = a[4];
	b[4] = a[1];
	return b;
    }
    public static int[] right(int[] a){
        int[] b = new int[6];
        b[0] = a[0];
	b[3] = a[3];
	b[1] = a[4];
	b[2] = a[1];
	b[4] = a[5];
	b[5] = a[2];
	return b;
    }
    public static boolean cmp(int[] a, int[] b){
        for(int i = 0; i < 6; i++){
            if(a[i] != b[i]) return false;
        }
        return true;
    }
    public static int BFS(int[] a, int[] des){
        Queue<Pair> q = new LinkedList<>();
        q.offer(new Pair(a, 0));
        while(!q.isEmpty()){
            Pair top = q.poll();
            int x = top.getCount();
            if(cmp(top.getArr(), des)) return x;
            q.offer(new Pair(left(top.getArr()), x+1));
            q.offer(new Pair(right(top.getArr()), x+1));
        }
        return -1;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int[] a = new int[6];
            for(int i = 0; i < 6; i++){
                a[i] = sc.nextInt();
            }
            int[] des = new int[6];
            for(int i = 0; i < 6; i++){
                des[i] = sc.nextInt();
            }
            System.out.println(BFS(a, des));
        }
    }
}