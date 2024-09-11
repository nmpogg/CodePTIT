import java.util.*;
import java.io.*;

public class LietKeTheoThuTuXuatHien {
    public static void main(String[] args) throws FileNotFoundException, IOException, ClassNotFoundException {
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("NHIPHAN.in"));
        ArrayList<String> arr = (ArrayList<String>)data.readObject();
        HashSet<String> set = new HashSet<>();
        
        for(String x : arr){
            String a[] = x.trim().split("\\s+");
            for(String x2 : a){
                set.add(x2.toLowerCase());
            }
        }
        Scanner sc = new Scanner(new File("VANBAN.in"));
        LinkedHashSet<String> ans = new LinkedHashSet<>();
        while(sc.hasNextLine()){
            String s = sc.nextLine().trim();
            String a[] = s.split("\\s+");
            for(String x : a){
                if(set.contains(x.toLowerCase()) && !ans.contains(x.toLowerCase())){
                    ans.add(x.toLowerCase());
                }
            }
        }
        for(String x : ans) System.out.println(x);
    }
}
