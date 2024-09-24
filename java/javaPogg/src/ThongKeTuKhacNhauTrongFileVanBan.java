import java.util.*;
import java.io.*;

public class ThongKeTuKhacNhauTrongFileVanBan {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("VANBAN.in"));
        int n = sc.nextInt();
        sc.nextLine();
        TreeMap<String, Integer> map = new TreeMap<>();
        for(int i = 0; i < n; i++){
            String s = sc.nextLine();
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
/*
3
PTIT duy tri hoc phi on dinh nam 2019 va khong tang trong nam 2020-2021 va 2021-2022!
Khi dich benh xuat hien PTIT trich hon 6 ty dong ho tro sinh vien PTIT
voi muc ho tro 500000 dong/sinh vien PTIT.
*/