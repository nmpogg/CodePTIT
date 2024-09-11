import java.util.*;
import java.io.*;

public class SoThuanNghichTrongFile {
    public static boolean checkTN(String s){
        int n = s.length();
        if(n == 1 || n % 2 == 0) return false;
        for(int i = 0; i < n; i++){
            if((s.charAt(i) - '0') % 2 == 0) return false;
        }
        for(int i = 0; i < n/2; i++){
            if(s.charAt(i) != s.charAt(n-i-1)) return false;
        }
        return true;
    }
    
    public static void main(String[] args) throws Exception {
        ObjectInputStream data1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
        ObjectInputStream data2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
        ArrayList<Integer> a = (ArrayList<Integer>) data1.readObject();
        ArrayList<Integer> b = (ArrayList<Integer>) data2.readObject();
        int[] freq = new int[1000001];
        for(int x : a){
            if(checkTN("" + x) && b.contains(x)){
                freq[x]++;
            }
        }
        for(int x : b){
            if(checkTN("" + x) && freq[x] != 0){
                freq[x]++;
            }
        }
        int cnt = 0;
        for(int i = 10; i <= 1000000; i++){
            if(freq[i] > 0 && cnt < 10){
                cnt++;
                System.out.println(i + " " + freq[i]);
            }
            if(cnt > 10) break;
        }
    }
}
