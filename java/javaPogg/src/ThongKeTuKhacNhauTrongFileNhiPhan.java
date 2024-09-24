import java.util.*;
import java.io.*;


public class ThongKeTuKhacNhauTrongFileNhiPhan {
    public static void main(String[] args) throws Exception{
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<String> arr = (ArrayList<String>) data.readObject();
        TreeMap<String, Integer> map = new TreeMap<>();
        for(String s : arr){
            String res = " ";
            for(char c : s.toCharArray()){
                if(c == ',' || c == '.' || c == '?' || c == '!' || c == ':' && c == ';' && c == '(' || c == ')' || c == '-' || c == '/'){
                    res += " ";
                }
                else if(Character.isAlphabetic(c) || Character.isDigit(c) || c == ' ') res += Character.toLowerCase(c);
            }
            String[] a = res.trim().split("\\s+");
            for(String x : a){
                if(map.containsKey(x)){
                    int freq = map.get(x);
                    map.put(x, freq+1);
                }
                else map.put(x, 1);
            }
        }
        
        ArrayList<Map.Entry<String, Integer>> list = new ArrayList<>(map.entrySet());
        Collections.sort(list, new Comparator<Map.Entry<String, Integer>>() {
            @Override
            public int compare(Map.Entry<String, Integer> o1, Map.Entry<String, Integer> o2) {
                return o2.getValue().compareTo(o1.getValue());
            }
        });
        for (Map.Entry<String, Integer> entry : list) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        } 
    }
}
