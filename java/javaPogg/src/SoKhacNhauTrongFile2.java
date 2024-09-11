import java.util.*;
import java.io.*;

public class SoKhacNhauTrongFile2 {
    public static void main(String[] args) throws Exception{
        DataInputStream data = new DataInputStream(new FileInputStream("DATA.IN"));
        int[] freq = new int[1001];
        while(data.available() > 0){
            int n = data.readInt();
            freq[n]++;
        }
        for(int i = 0; i <= 1000; i++){
            if(freq[i] != 0){
                System.out.println(i + " " + freq[i]);
            }
        }
    }
}
