import java.util.*;
import java.io.*;

public class ChuanHoaVaSapXep {
    public static void main(String[] args) throws Exception {
        File file = new File("DANHSACH.in");
        Scanner sc = new Scanner(file);
        ArrayList<String> ds = new ArrayList<>();
        while(sc.hasNextLine()){
            String s = sc.nextLine().trim();
            String arr[] = s.split("\\s+");
            String ans = "";
            for(String x : arr){
                ans += Character.toUpperCase(x.charAt(0));
                for(int j = 1; j < x.length(); j++){
                    ans += Character.toLowerCase(x.charAt(j));
                }
                ans += " ";
            }
            ds.add(ans.trim());
        }
        Collections.sort(ds, new Comparator<String>(){
            @Override
            public int compare(String a, String b) {
                String[] arr1 = a.split("\\s+");
                String[] arr2 = b.split("\\s+");
                if(arr1[arr1.length-1].compareTo(arr2[arr2.length-1]) != 0){
                    return arr1[arr1.length-1].compareTo(arr2[arr2.length-1]);
                }
                else if(arr1[0].compareTo(arr2[0]) != 0){
                    return arr1[0].compareTo(arr2[0]);
                }
                else{
                    for(int i = 1; i < Math.min(arr1.length-1, arr2.length-1); i++){
                        if(arr1[i].compareTo(arr2[i]) != 0){
                            return arr1[i].compareTo(arr2[i]);
                        }
                    }
                }
                return arr1.length - arr2.length;
            }
            
        });
        for(String x : ds){
            System.out.println(x);
        }
    }
}
