import java.util.*;
import java.io.*;

public class SoKhacNhauTrongFile3 {
    public static void main(String[] args) throws Exception{
        ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
        ArrayList<Integer> arr  = (ArrayList<Integer>)data.readObject();
        int[] freq = new int[1001];
        for(int x : arr){
            freq[x]++;
        }
        for(int i = 0; i <= 1000; i++){
            if(freq[i] != 0){
                System.out.println(i + " " + freq[i]);
            }
        }
    }
}
