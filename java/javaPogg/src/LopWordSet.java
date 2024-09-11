import java.util.*;

class WordSet{
    private ArrayList<String> danhSach;

    public WordSet() {
    }
    
    public WordSet(String s){
        this.danhSach = new ArrayList<>();
        StringTokenizer st = new StringTokenizer(s, " ");
        while(st.hasMoreTokens()){
            this.danhSach.add(s);
        }
    }
    public WordSet union(WordSet other){
        TreeSet<String> set = new TreeSet<>();
        for(String x : this.danhSach){
            set.add(x);
        }
        for(String x : other.danhSach){
            set.add(x);
        }
        WordSet ans = new WordSet();
        ans.danhSach = new ArrayList<>(set);
        return ans;
    }
    public WordSet intersection(WordSet other){
        WordSet ans = new WordSet();
        for(String x : this.danhSach){
            for(String y : other.danhSach){
                if(x == y) ans.danhSach.add(x);
            }
        }
        Collections.sort(ans.danhSach);
        return ans;
    }
    @Override
    public String toString(){
        String res = "";
        for(String x : this.danhSach){
            res += x + " ";
        }
        return res;
    }
}

public class LopWordSet {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
    }
}
