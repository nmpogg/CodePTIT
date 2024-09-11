import java.util.*;
import java.io.*;

public class SoNguyenToLonNhatTrongFile {
    public static int[] prime = new int[1000001];
    public static void sieve(){
       for(int i = 0; i <= 1000000; i++){
           prime[i] = 1;
       }
       prime[0] = prime[1] = 0;
       for(int i = 2; i <= 1000; i++){
           if(prime[i] == 1){
               for(int j = i * i; j <= 1000000; j+=i){
                   prime[j] = 0;
               }
           }
       }
    }
    public static void main(String[] args) throws Exception{
       sieve();
       ObjectInputStream data = new ObjectInputStream(new FileInputStream("DATA.in"));
       ArrayList<Integer> arr = (ArrayList<Integer>) data.readObject();
       int[] freq = new int[1000001];
       for(int x : arr){
           if(prime[x] == 1){
               freq[x]++;
           }
       }
       int cnt = 0;
       for(int i = 1000000; i >= 0; i--){
           if(prime[i] == 1 && freq[i] != 0 && cnt < 10){
               cnt++;
               System.out.println(i + " " + freq[i]);
           }
       }
    }
}
