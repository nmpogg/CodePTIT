import java.util.*;

class IntSet{
    private TreeSet<Integer> set;
    
    public TreeSet<Integer> getSet(){
        return this.set;
    }
    public IntSet(){
        this.set = new TreeSet<>();
    }
    public IntSet(int a[]) {
        TreeSet<Integer> set = new TreeSet<>();
        for(int x : a) set.add(x);
        this.set = set;
    }
    public IntSet union(IntSet otherIntSet){
        IntSet ans = new IntSet();
        for(int x : this.set){
            ans.set.add(x);
        }
        for(int x : otherIntSet.set){
            ans.set.add(x);
        }
        return ans;
    }
    @Override
    public String toString(){
        String res = "";
        for(int x : this.set){
            res += "" + x + " ";
        }
        return res;
    }
}

public class LopIntset {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
    }
}
